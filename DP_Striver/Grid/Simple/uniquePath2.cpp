#include<bits/stdc++.h>
using namespace std;

int path(int i, int j, vector<vector<int>> &arr){
    if(i>=0 && j>=0 && arr[i][j]==-1) return 0;
    if(i==0 && j==0) return 1;
    if(i<0 ||j<0) return 0;

    int left=path(i,j-1,arr);
    int top=path(i-1,j,arr);

    return left+top;
}

int main()
{
    vector<vector<int>> arr={{1,1,1},{1,-1,1},{1,1,1}};
    cout<<path(2,2,arr)<<endl;
    return 0;
}