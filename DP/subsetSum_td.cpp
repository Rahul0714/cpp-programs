#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int static t[6][12];

bool subsetSum(vector<int> arr, int n, int k){
    for(int i=0;i<n+1;i++){
        for(int j=0;j<k+1;j++){
            if(i==0)
                t[i][j]=false;
            if(j==0)
                t[i][j]=true;
        }
    }
    t[0][0]=true;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<k+1;j++){
            if(arr[i-1]<=j) t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
            else t[i][j]=t[i-1][j];
        }
    }
    return t[n][k];
}

int main()
{
    vector<int> arr={2,3,7,8,10};
    cout<<subsetSum(arr,5,30)<<endl;
    return 0;
}