#include<bits/stdc++.h>
using namespace std;

void compute(vector<int> &arr, vector<int> ds, bool check[]){
    if(ds.size()==arr.size()){
        for(auto i:ds){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<arr.size();i++){
        if(!check[i]){
            check[i]=true;
            ds.push_back(arr[i]);
            compute(arr,ds,check);
            check[i]=false;
            ds.pop_back();
        }
    }
}

int main()
{
    vector<int> arr={1,2,3},ds;
    // vector<vector<int>> ans
    bool check[arr.size()]={0};
    // compute(arr,ds,ans,check);
    compute(arr,ds,check);
    return 0;
}