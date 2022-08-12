#include<iostream>
#include<vector>
using namespace std;

char nextChar(vector<char> arr, int s, int e, char k){
    int start=s;
    int end=e-1;
    char ans='#';
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==k) start=mid+1;
        else if(k<arr[mid]){
            ans=arr[mid];
            end=mid-1;
        } 
        else{
            start=mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<char> arr={'a','c','f','h'};
    cout<<nextChar(arr,0,arr.size(),'f')<<endl;
    return 0;
}