#include<bits/stdc++.h>
using namespace std;

void sum(int i, int n, int target, int arr[], vector<int> ans){
    if(i==n){
        if(target==0){
            for(auto i:ans){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(arr[i]<=target){
        ans.push_back(arr[i]);
        sum(i,n,target-arr[i],arr,ans);
        ans.pop_back();
    }
    sum(i+1,n,target,arr,ans);
}

int main()
{
    int arr[]={2,3,6,7};
    int target=7;
    int size=4;
    vector<int> ans;
    sum(0,size,target,arr,ans);
    return 0;
}