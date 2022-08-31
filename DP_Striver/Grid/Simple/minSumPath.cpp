#include<bits/stdc++.h>
using namespace std;

int path(int i, int j, vector<vector<int>> arr){
    if(i==0 && j==0) return arr[i][j];
    if(i<0 || j<0) return INT_MAX;
    
    int left=arr[i][j]+path(i,j-1,arr);
    int top=arr[i][j]+path(i-1,j,arr);

    return min(left,top);
}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> arr;
    for(int i=0;i<n;i++){
        vector<int> temp(m,0);
        for(int j=0;j<m;j++){
            cin>>temp[i];
        }
        arr.push_back(temp);
    }
    cout<<path(n-1,m-1,arr)<<endl;
    return 0;
}
 
//correct but problem in inputing values