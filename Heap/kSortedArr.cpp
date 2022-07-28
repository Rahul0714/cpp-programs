#include<bits/stdc++.h>
using namespace std;

vector<int> kSort(vector<int> &arr, int n, int k){
    vector<int> ans;
    priority_queue<int, vector<int>,greater<int>> minH;
    for(int i=0;i<n;i++){
        minH.push(arr[i]);
        if(minH.size()>k){
            ans.push_back(minH.top());
            minH.pop();
        }
    }
    while(minH.size()!=0){
        ans.push_back(minH.top());
        minH.pop();
    }
    return ans;
}

int main()
{
    vector<int> arr={6,5,3,2,8,10,9};
    arr=kSort(arr,arr.size(),4);
    for(auto i:arr) 
        cout<<i<<" ";
    return 0;
}