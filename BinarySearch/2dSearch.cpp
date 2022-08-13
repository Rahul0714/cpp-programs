#include<iostream>
#include<bits/stdc++.h>
using namespace std;

pair<int,int> find(vector<vector<int>> arr, int i, int j, int k){
    pair<int,int> ans;
    ans.first=-1;
    ans.second=-1;
    while(i<arr.size() && i>=0 && j<arr.size() && j>=0){
        if(arr[i][j]==k){
            ans.first=i;
            ans.second=j;
            return ans;
        }else if(k<arr[i][j])
            j--;
        else i++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr={{10,20,30,40},{15,25,35,45},{27,29,37,47},{32,33,39,50}};
    pair<int,int> ans=find(arr,0,3,28);
    cout<<"( "<<ans.first<<" , "<<ans.second<<" )"<<endl;
    return 0;
}