#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> arr, int n, int max, int k){
    int student=1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>max){
            student++;
            sum=arr[i];
        }
        if(student>k) return false;
    }
    return true;
}

int BS(vector<int> arr, int s, int e, int k){
    int start=s;
    int end=e;
    int ans=-1;
    if(k>arr.size()) return ans;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isValid(arr,mid,arr[mid],k)){
            ans=mid;
            end=mid-1;
        }else start=mid+1;
    }
    return ans;
}

int main()
{
    vector<int> arr={10,20,30,40};
    cout<<BS(arr,40,100,2)<<endl;
    return 0;
}