#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start=0,end=n-1,mid;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key)
            return mid;
        else if(key>arr[mid])
            start=mid+1;
        else
            end=mid-1;
    }
    return -1;
}

int main()
{
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    cout<<binarySearch(arr,n,key)<<endl;
    return 0;
}