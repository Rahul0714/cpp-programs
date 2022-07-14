#include<bits/stdc++.h>
using namespace std;

void subsetSum(int i, int n, int sum, vector<int> &arr, vector<int> &ans){
    if(i==n){
        ans.push_back(sum);
        return;
    }
    subsetSum(i+1,n,sum+arr[i],arr,ans);
    subsetSum(i+1,n,sum,arr,ans);
}

int main()
{
    vector<int> arr={1,2,3},ans;
    subsetSum(0,arr.size(),0,arr,ans);
    sort(ans.begin(),ans.end());
    for(auto i:ans)
        cout<<i<<"\n";
    return 0;
}