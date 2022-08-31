#include<iostream>
#include<vector>
using namespace std;

int Count(int n, vector<int> &arr, int k, vector<vector<int>> &dp){
    if(k==0) return 1;
    if(n==0) return arr[0]==k;

    if(dp[n][k]!=-1) return dp[n][k];

    int np=Count(n-1,arr,k,dp);
    int p=0;
    if(arr[n]<=k)
        p=Count(n-1,arr,k-arr[n],dp);
    
    return dp[n][k]=p+np;
}

int main()
{
    vector<int> arr={9,7,0,3,9,8,6,5,7,6};
    int k=31;
    vector<vector<int>> dp(arr.size(),vector<int>(k+1,-1));
    cout<<Count(arr.size()-1, arr, k, dp)<<endl;
    return 0;
}