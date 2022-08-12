#include<iostream>
#include<vector>
using namespace std;

int find(vector<int> arr, int s, int e, int k){
    int start=s;
    int end=e-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==k) return mid;
        if(mid-1>=start && arr[mid-1]==k) return mid-1;
        if(mid+1<=end && arr[mid+1]==k) return mid+1;
        else if(k<arr[mid]) end=mid-2;
        else start=mid+2;
    }
    return -1;
}

int main()
{
    vector<int> arr={5,10,30,20,40};
    cout<<find(arr,0,arr.size(),20)<<endl;
    return 0;
}