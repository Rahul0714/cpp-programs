#include<bits/stdc++.h>
using namespace std;

void find(int ind, vector<int> &arr, vector<int> &ans){
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=ind;i<arr.size();i++){
        if(i!=ind && arr[i]==arr[i-1]) continue;
        ans.push_back(arr[i]);
        find(i+1,arr,ans);
        ans.pop_back();
    }
}

int main()
{
    vector<int> arr={1,2,2},ans;
    sort(arr.begin(),arr.end());
    find(0,arr,ans);
    return 0;
}