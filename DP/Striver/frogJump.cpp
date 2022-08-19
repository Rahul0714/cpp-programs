#include<bits/stdc++.h>
using namespace std;

int frogJump(int arr[], int n){
    if(n==0) return 0;
    int left=frogJump(arr,n-1) + abs(arr[n]-arr[n-1]);
    int right=INT_MAX;
    if(n>1)
        right=frogJump(arr,n-2) + abs(arr[n]-arr[n-2]);
    return min(left,right);
}

int main()
{
    int arr[]={30,10,60,10,60,50};
    cout<<frogJump(arr,5)<<endl;
    return 0;
}