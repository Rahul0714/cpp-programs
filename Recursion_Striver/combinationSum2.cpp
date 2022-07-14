#include<bits/stdc++.h>
using namespace std;

void combinationSum(int ind, int target, vector<int> &arr, vector<int> &ans, vector<vector<int>> &ds){
    if(target==0){
        // ds.push_back(ans);
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=ind;i<arr.size();i++){
        if(i>ind && arr[i]==arr[i-1]) continue;
        if(arr[i]>target) break;
        ans.push_back(arr[i]);
        combinationSum(i+1,target-arr[i],arr,ans,ds);
        ans.pop_back();  
    }
}

int main()
{
    vector<int> arr={1,1,1,2,2},ans;
    vector<vector<int>> ds;
    int sum=4;
    sort(arr.begin(),arr.end());
    combinationSum(0,sum,arr,ans,ds);
    return 0;
}