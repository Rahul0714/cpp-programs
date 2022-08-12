#include<iostream>
#include<vector>
using namespace std;

int firstOccurance(vector<int> arr, int s, int e, int k){
    int start=s;
    int end=e-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==k){
            ans=mid;
            end=mid-1;
        }
        else if(k<arr[mid]) end=mid-1;
        else start=mid+1;
    }
    return ans;
}

int lastOccurance(vector<int> arr, int s, int e, int k){
    int start=s;
    int end=e-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==k){
            ans=mid;
            start=mid+1;
        }
        else if(k<arr[mid]) end=mid-1;
        else start=mid+1;
    }
    return ans;
}

int main()
{
    vector<int> arr={2,4,10,10,10,10,18,20};
    int first=firstOccurance(arr,0,arr.size(),10);
    int last=lastOccurance(arr,0,arr.size(),10);
    cout<<last-first+1<<endl;
    return 0;
}