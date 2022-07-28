#include<bits/stdc++.h>
using namespace std;

vector<int> kClosest(vector<int> arr, int n, int k, int x){
    vector<int> ans;
    priority_queue<pair<int,int>> maxH;
    for(int i=0;i<n;i++){
        maxH.push({abs(arr[i]-x),arr[i]});
        if(maxH.size()>k)
            maxH.pop();
    }
    while(maxH.size()!=0){
        ans.push_back(maxH.top().second);
        maxH.pop();
    }
    return ans;
}

int main()
{
    vector<int> arr={5,6,7,8,9};
    arr=kClosest(arr,arr.size(),3,7);
    for(auto i:arr)
        cout<<i<<" ";
    return 0;
}