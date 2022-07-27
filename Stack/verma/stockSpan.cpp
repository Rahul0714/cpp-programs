#include<bits/stdc++.h>
using namespace std;

vector<int> stockSpan(int arr[], int n){
    vector<int> ans;
    stack<pair<int,int>> st;
    for(int i=0;i<n;i++){
        if(st.empty())
            ans.push_back(-1);
        else if(st.top().first>arr[i]){
            ans.push_back(st.top().second);
        }
        else{
            while(!st.empty() && st.top().first<=arr[i])
                st.pop();
            if(st.empty())
                ans.push_back(-1);
            else
                ans.push_back(st.top().second);
        }
        st.push({arr[i],i});
    }
    for(int i=0;i<n;i++)
        ans[i]=i-ans[i];
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> ans=stockSpan(arr,n);
    for(auto el:ans)
        cout<<el<<" ";
    return 0;
}