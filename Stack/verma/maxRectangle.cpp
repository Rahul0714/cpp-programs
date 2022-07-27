#include<bits/stdc++.h>
using namespace std;

vector<int> NSL(vector<int> arr, int n){
    vector<int> left;
    stack<pair<int,int>> st;
    int psuedoLeft=-1;
    for(int i=0;i<n;i++){
        if(st.empty()) left.push_back(psuedoLeft);
        else if(st.top().first<arr[i]) left.push_back(st.top().second);
        else{
            while(!st.empty() && st.top().first>=arr[i])
                st.pop();
            st.empty()?left.push_back(psuedoLeft):left.push_back(st.top().second);
        }
        st.push({arr[i],i});
    }
    return left;
}

vector<int> NSR(vector<int> arr, int n){
    vector<int> right;
    stack<pair<int,int>> st;
    int psuedoRight=n;
    for(int i=n-1;i>=0;i--){
        if(st.empty()) right.push_back(psuedoRight);
        else if(st.top().first<arr[i]) right.push_back(st.top().second);
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

int MAH(vector<int> temp, int n){
    vector<int> left=NSL(temp,n);
    vector<int> right=NSR(temp,n);
    int width[n],max=-1;
    for(int i=0;i<n;i++){
        width[i]=right[i]-left[i]-1;
        width[i]*=temp[i];
        if(width[i]>max)
            max=width[i];
    }
    return max;
}

int maxRect(vector<vector<int>> arr, int n){
    vector<int> temp(n);
    int maxRect=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0) temp[j]=0;
            else temp[j]+=arr[i][j];
        }
        int newRect=MAH(temp,n);
        if(newRect>maxRect)
            maxRect=newRect;
    }
    return maxRect;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> arr;
    vector<int> temp(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>temp[j];
        }
        arr.push_back(temp);
    }
    cout<<maxRect(arr,n)<<endl;
    return 0;
}