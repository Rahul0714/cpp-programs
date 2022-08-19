#include<bits/stdc++.h>
using namespace std;

int fibo(int n, int dp[]){
    int prev2=0;
    int prev1=1;
    int curr=0;
    for(int i=2;i<=n;i++){
        curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    return prev2;
}

int main()
{
    int n;
    cin>>n;
    int dp[n+1];
    memset(dp,-1,sizeof(dp));
    cout<<fibo(n,dp)<<endl;
    return 0;
}