#include<iostream>
#include<vector>
using namespace std;

bool Path(int n, vector<int> &arr, int k, vector<vector<int>> &dp){
    if(k==0) return true;
    if(n==0) return arr[0]==k;

    if(dp[n][k]!=-1) return dp[n][k];

    int np=Path(n-1,arr,k,dp);
    int p=false;
    if(arr[n]<=k)
        p=Path(n-1,arr,k-arr[n],dp);
    
    return dp[n][k]=p||np;
}

int main()
{
    vector<int> arr={3,2,7};
    int k=9;
    vector<vector<int>> dp(arr.size(),vector<int>(k+1,-1));
    cout<<Path(arr.size()-1,arr,k,dp)<<endl;
    for(int i=arr.size()-1;i<arr.size();i++){
        for(int j=k;j<k+1;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    } 
    return 0;
}

//do it later as it'll easily done by top-down