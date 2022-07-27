#include<bits/stdc++.h>
using namespace std;

vector<int> findNearestGreater(int arr[], int n){
    vector<int> ans;
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        if(st.empty()){
            ans.push_back(-1);
        }else if(st.top()>arr[i]){
            ans.push_back(st.top());
        }
        else{
            while(!st.empty()&&st.top()<=arr[i]){
            st.pop();
            }
            st.empty()?ans.push_back(-1):ans.push_back(st.top());
        }
        st.push(arr[i]);
        // cout<<st.top()<<" ";
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> ans=findNearestGreater(arr,n);
    for(auto el:ans)
        cout<<el<<" ";
    return 0;
}