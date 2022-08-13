#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fo(int arr[], int s, int e, int k){
    int ans=-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]==k){
            ans=m;
            e=m-1;
        }
        else if(k<arr[m])
            e=m-1;
        else s=m+1;
    }
    return ans;
}

int lo(int arr[], int s, int e, int k){
    int ans=-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]==k){
            ans=m;
            s=m+1;
        }
        else if(k<arr[m]) e=m-1;
        else s=m+1;
    }
    return ans;
}

int main()
{
    int arr[7]={1,3,5,7,7,7,9};
    int f=fo(arr,0,6,8);
    int l=lo(arr,0,6,8);
    cout<<l-f+1<<endl;
    return 0;
}