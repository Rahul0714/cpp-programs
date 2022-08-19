
//steps to convert recursion to dp
    // 0. declare an dp array having size as maximum problem size
    // 1. store the values in dp array as shown
    // 2. check condition after base so that it will serve the purpose

#include<bits/stdc++.h>
using namespace std;

int static dp[10]; //step 0

int fibo(int n){
    if(n<=1) return n;
    if(dp[n]!=-1){           //step 2
        // cout<<dp[n]<<endl;
        return dp[n];
    }
    return dp[n]=fibo(n-1)+fibo(n-2);  //step 1
}

int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<fibo(n)<<endl;
    return 0;
}