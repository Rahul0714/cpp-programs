#include<bits/stdc++.h>
#include<vector>
using namespace std;

int jump(int n, int arr[]){
    if(n==0) return 0;
    int l= jump(n-1,arr)+abs(arr[n]-arr[n-1]);
    int r=INT_MAX;
    if(n>1)
        r=jump(n-2,arr)+abs(arr[n]-arr[n-2]);
    return min(l,r);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<jump(n-1,arr)<<endl;
    return 0;
}