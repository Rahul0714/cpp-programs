#include<iostream>
#include<vector>
using namespace std;

int rotationCount(vector<int> arr, int s, int e){
    int start=s;
    int end=e-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]<=arr[mid-1] && arr[mid]<=arr[mid+1])
            return mid;
        else if(arr[mid]<=arr[end]) end=mid-1;
        else if(arr[mid]>=arr[start]) start=mid+1;
    }
    return 0;
}

int main()
{
    vector<int> arr={12,15,18,2,5,6,8,11};
    cout<<rotationCount(arr,0,arr.size())<<endl;   
    return 0;
}