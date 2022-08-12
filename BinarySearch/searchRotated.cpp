#include<iostream>
#include<vector>
using namespace std;

int findMin(vector<int> arr, int s, int e){
    int start=s;
    int end=e-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]<=arr[mid+1] && arr[mid]<=arr[mid-1])
            return mid;
        else if(arr[mid]<=arr[end]) end=mid-1;
        else if(arr[mid]>=arr[start]) start=mid+1;
    }
    return 0;
}

int BS(vector<int> arr, int s, int e, int k){
    int start=s;
    int end=e-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==k) return mid;
        else if(k<arr[mid]) end=mid-1;
        else start=mid+1;
    }
    return -1;
}

int main()
{
    vector<int> arr={11,12,15,18,2,5,6,8};
    int min=findMin(arr,0,arr.size());
    int left=BS(arr,0,min-1,9);
    int right=BS(arr,min,arr.size(),9);
    if(left==-1 && right==-1)
        cout<<left<<endl;
    else if(left==-1)
        cout<<right<<endl;
    else 
        cout<<left<<endl;
    return 0;
}