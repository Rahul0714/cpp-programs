#include<iostream>
using namespace std;

int findUnique(int arr[], int n){
    int xorSum=0;
    for(int i=0;i<n;i++){
        xorSum=xorSum^arr[i];
    }
    return xorSum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<findUnique(arr,n)<<endl;
    return 0;
}