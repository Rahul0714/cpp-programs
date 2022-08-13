#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int ub(int arr[], int s, int e, int k){
    int size=e;
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]==k)
            s=m+1;
        else if(k<arr[m]) e=m-1;
        else s=m+1;
    }
    return s;
}

int main()
{
    int arr[7]={1,3,5,7,7,7,9};
    cout<<ub(arr,0,6,6)<<endl;
    return 0;
}