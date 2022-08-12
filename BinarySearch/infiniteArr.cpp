#include<iostream>
#include<vector>
using namespace std;

int BS(vector<int> arr, int s, int e, int k){
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]==k) return m;
        else if(k<arr[m]) e=m-1;
        else s=m+1;
    }
    return -1;
}

int findIndex(vector<int> arr,int s, int k){
    int start=s;
    int end=start+1;
    while(k>arr[end]){
        start=end;
        end=end*2;
    }
    return BS(arr, start, end, k);
}

int main()
{
    vector<int> arr={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    cout<<findIndex(arr,0,7)<<endl;
    return 0;
}