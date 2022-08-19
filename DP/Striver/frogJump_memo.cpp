#include<bits/stdc++.h>
using namespace std;

int frogJump(int arr[], int dp[], int n){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int left=frogJump(arr,dp,n-1)+abs(arr[n]-arr[n-1]);
    int right=INT_MAX;
    if(n>1)
    right=frogJump(arr,dp,n-2)+abs(arr[n]-arr[n-2]);
    return dp[n]=min(left, right);
}

int main()
{
    int arr[]={10,20,30,10};
    int dp[5];
    memset(dp,-1,sizeof(dp));
    cout<<frogJump(arr,dp,3)<<endl;
    return 0;
}