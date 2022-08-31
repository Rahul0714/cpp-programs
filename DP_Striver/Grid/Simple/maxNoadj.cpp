#include<bits/stdc++.h>
using namespace std;

int sum(int ind, int arr[]){
    if(ind==0) return arr[ind];
    if(ind<0)   return 0;
    int pick=arr[ind]+sum(ind-2,arr);
    int npick=0+sum(ind-1,arr);
    return max(pick,npick);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<sum(n-1,arr)<<endl;
    return 0;
}