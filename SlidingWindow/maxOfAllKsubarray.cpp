#include<bits/stdc++.h>
using namespace std;

vector<int> maxOfAllKSubarrays(int arr[], int n, int k){
    int i=0,j=0;
    vector<int> ans;
    queue<int> q;
    while(j<n){
        while(q.size()>0&&q.front()<arr[j])
            q.pop();
        q.push(arr[j]);
        if(j-i+1==k){
            int mx=q.front();
           ans.push_back(mx);
           if(q.front()==arr[i])
            q.pop();
            i++;
        }
        j++;
    }
    return ans;
}

int main()
{
    int arr[]={1,3,-1,-3,5,-5,6,7};
    vector<int> ans=maxOfAllKSubarrays(arr,8,3);
    for(auto i: ans){
        cout<<i<<" ";
    }
    return 0;
}

// 8,7,6,5,4,3,2,1