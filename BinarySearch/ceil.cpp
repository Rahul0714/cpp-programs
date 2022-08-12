#include<iostream>
#include<vector>
using namespace std;

int ceil(vector<int> arr, int s, int e, int k){
    int start=s;
    int end=e-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==k)return arr[mid];
        else if(k<arr[mid]){ 
            end=mid-1;
        }
        else{ 
            ans=arr[mid];
            start=mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr={1,2,3,4,8,10,10,19};
    cout<<ceil(arr,0,arr.size(),9)<<endl;
    return 0;
}