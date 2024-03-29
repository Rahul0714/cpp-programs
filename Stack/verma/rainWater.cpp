#include<bits/stdc++.h>
using namespace std;

int trappedWater(int arr[], int n){
    int maxl[n],maxr[n];
    maxl[0]=arr[0];
    for(int i=1;i<n;i++){
        maxl[i]=max(maxl[i-1],arr[i]);
    }
    // for(auto i:maxl)
    //     cout<<i<<" ";
    // cout<<endl;
    maxr[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        maxr[i]=max(maxr[i+1],arr[i]);
    }
    // for(auto i:maxr)
    //     cout<<i<<" ";
    // cout<<endl;
    int water[n];
    for(int i=0;i<n;i++){
        water[i]=min(maxl[i],maxr[i])-arr[i];
    }
    // for(auto i:water)
    //     cout<<i<<" ";
    // cout<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=water[i];
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<trappedWater(arr,n)<<endl;
    return 0;
}