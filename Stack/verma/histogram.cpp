#include<bits/stdc++.h>
using namespace std;

vector<int> NSL(int arr[], int n){
    vector<int> left;
    stack<pair<int,int>> st;
    int psuedoLeft=-1;
    for(int i=0;i<n;i++){
        if(st.empty())
            left.push_back(psuedoLeft);
        else if(st.top().first<arr[i])
            left.push_back(st.top().second);
        else{
            while(!st.empty() && st.top().first>=arr[i])
                st.pop();
            st.empty()?left.push_back(psuedoLeft):left.push_back(st.top().second);
        }
        st.push({arr[i],i});
    }
    return left;
}

vector<int> NSR(int arr[], int n){
    vector<int> right;
    stack<pair<int,int>> st;
    int psuedoRight=n;
    for(int i=n-1;i>=0;i--){
        if(st.empty())
            right.push_back(psuedoRight);
        else if(st.top().first<arr[i])
            right.push_back(st.top().second);
        else{
            while(!st.empty() && st.top().first>=arr[i])
                st.pop();
            st.empty()?right.push_back(psuedoRight):right.push_back(st.top().second);
        }
        st.push({arr[i],i});
    }
    reverse(right.begin(), right.end());
    return right;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> left=NSL(arr,n);
    vector<int> right=NSR(arr,n);

    int width[n];
    int maxHist=-1;    
    for(int i=0;i<n;i++){
        width[i]=right[i]-left[i]-1;
    }
    for(int i=0;i<n;i++){
        width[i]*=arr[i];
        if(width[i]>maxHist)
            maxHist=width[i];
    }
    cout<<maxHist<<endl;
    
    return 0;
}