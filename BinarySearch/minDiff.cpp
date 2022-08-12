#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int minDiff(vector<int> arr, int s, int e, int k){
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]==k) return arr[m];
        else if(k<arr[m]) e=m-1;
        else s=m+1;
    }
    if(abs(arr[s]-k)<abs(arr[e]-k)) return arr[s];
    return arr[e];
}

int main()
{
    vector<int> arr={1,3,8,10,15};
    cout<<minDiff(arr,0,arr.size()-1,12)<<endl;
    return 0;
}