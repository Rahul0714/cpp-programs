#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minNo=INT_MAX,maxNo=INT_MIN;
    for(int i=0;i<n;i++){
        minNo=min(minNo,arr[i]);
        maxNo=max(maxNo,arr[i]);
    }
    cout<<"Min: "<<minNo<<endl;
    cout<<"Max: "<<maxNo<<endl;
    return 0;
}