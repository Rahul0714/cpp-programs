#include<bits/stdc++.h>
using namespace std;

void frequencySort(int arr[], int n){
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    priority_queue<pair<int,int>> maxH;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        maxH.push({itr->second,itr->first});
    }
    while(maxH.size()>0){
        int f=maxH.top().first;
        int e=maxH.top().second;
        for(int i=0;i<f;i++)
            cout<<e<<" ";
        maxH.pop();
    }
}

int main()
{
    int arr[]={1,1,1,2,2,3,4};
    frequencySort(arr,7);
    return 0;
}