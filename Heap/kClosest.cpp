#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> kClosest(vector<pair<int,int>> arr, int n, int k){
    vector<pair<int,int>> ans;
    priority_queue<pair<int,pair<int,int>>> maxH;
    for(int i=0;i<arr.size();i++){
        maxH.push({((arr[i].first*arr[i].first)+(arr[i].second*arr[i].second)),{arr[i].first,arr[i].second}});
        if(maxH.size()>k)
            maxH.pop();
    }
    while(!maxH.empty()){
        ans.push_back({(maxH.top().second.first),(maxH.top().second.second)});
        maxH.pop();
    }
    return ans;
}

int main()
{
    vector<pair<int,int>> arr={{1,3},{-2,2},{5,8},{0,1}};
    arr=kClosest(arr,4,2);
    for(auto p:arr){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}