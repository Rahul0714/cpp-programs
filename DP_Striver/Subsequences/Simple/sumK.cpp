#include<iostream>
#include<vector>
using namespace std;

bool sum(int n, vector<int> &arr, int k, vector<vector<int>> &dp){
    if(k==0) return true;
    if(n==0) return (arr[0]==k);

    if(dp[n][k]!=-1) return dp[n][k];

    bool nt=sum(n-1,arr,k,dp);
    bool t=false;
    if(arr[n]<=k)
        t=sum(n-1,arr,k-arr[n],dp);
    return dp[n][k]=t || nt;
}

int main()
{
    vector<int> arr={1,2,5,4};
    int k=4;
    vector<vector<int>>dp(arr.size(),vector<int>(k+1,-1));
    cout<<sum(arr.size()-1,arr,k,dp)<<endl;
    return 0;
}