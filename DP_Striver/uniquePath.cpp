#include<bits/stdc++.h>
using namespace std;

int path(int i, int j, vector<vector<int>> &arr){
    if(i==0 && j==0) return 1;
    if(i<0 || j<0) return 0;
    
    int up=path(i-1,j,arr);
    int left=path(i,j-1,arr);

    return up+left;
}

int main()
{
    vector<vector<int>> arr={{1,1},{1,1}};
    cout<<path(1,1,arr)<<endl;
    return 0;
}