#include<iostream>
#include<vector>
using namespace std;

int find(vector<int> arr, int s, int e,int k){
    int start=s;
    int end=e-1;
    int peak=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid>0 && mid<end){
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) {
                peak=mid;
                break;
            }
            else if(arr[mid-1]>arr[mid]) end=mid-1;
            else start=mid+1;
        }else if(mid==0){
            if(arr[mid]>arr[mid+1]) {
                peak=mid;
            }else{
                peak=mid+1;
            }
            break;
        }else if(mid==end){
            if(arr[mid]>arr[mid-1]){
                peak=mid;
            }else{
                peak=mid-1;
            }
            break;
        }
    }
    return peak;
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

int BSD(vector<int> arr, int s, int e, int k){
    int start=s;
    int end=e-1;
    while(start<=end){
        int mid=start+(end-start);
        if(arr[mid]==k) return mid;
        else if(k<arr[mid]) start=mid+1;
        else end=mid-1;
    }
    return -1;
}

int main()
{
    vector<int> arr={1,3,8,12,4,2};
    int k=13;
    int ind=find(arr,0,arr.size(),k);
    int left=BS(arr,0,ind,k);
    int right=BSD(arr,ind,arr.size(),k);
    if(left==-1 && right==-1) cout<<left<<endl;
    else if(left==-1) cout<<right<<endl;
    else cout<<left<<endl;
    return 0;
}