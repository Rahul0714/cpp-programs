#include<iostream>
#include<vector>
using namespace std;

int BS(vector<int> arr, int s, int e){
    int ans=-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]==1){
            ans=m;
            e=m-1;
        }
        else if(1<arr[m]) e=m-1;
        else s=m+1;
    }
    return ans;
}

int find(vector<int> arr, int s){
    int start=s;
    int end=start+1;
    while(arr[end]<1){
        start=end;
        end=end*2;
    }
    return BS(arr,start,end);
}

int main()
{
    vector<int> arr={0,0,0,0,0,0,0,0,0,1,1,1,1,1};
    cout<<find(arr,0)<<endl;
    return 0;
}