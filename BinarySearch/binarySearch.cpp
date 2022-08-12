#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> arr, int k){
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==k) return mid;
        else if(k<arr[mid]) end=mid-1;
        else start=mid+1;
    }
    return -1;
}

int rSearch(vector<int> arr, int start, int end, int k){
    if(start>end) return -1;
    int mid=start+(end-start)/2;
    if(arr[mid]==k)
        return mid;
    if(k>arr[mid]) return rSearch(arr,mid+1,end,k);
    else return rSearch(arr,start,end-1,k);
}

int BS(vector<int> arr, int s, int e, int el){
    int start=s;
    int end=e-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==el)
            return mid;
        else if(el<arr[mid])
            end=mid-1;
        else
            start=mid+1;
    }
    return -1;
}

int decendingSearch(vector<int> arr, int s, int e, int k){
    int start=s;
    int end=e;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==k) return mid;
        else if(k<arr[mid]) start=mid+1;
        else end=mid-1;
    }
    return -1;
}

int main()
{
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    vector<int> arrD={9,8,7,6,5,4,3,2,1,0};
    cout<<search(arr,10)<<endl;
    cout<<rSearch(arr,0,arr.size()-1,12)<<endl;
    cout<<BS(arr,0,arr.size(),9)<<endl;
    cout<<decendingSearch(arrD,0,arr.size(),8)<<endl;
    return 0;
}