#include<bits/stdc++.h>
using namespace std;

int kthLargest(int arr[], int n, int k){
    priority_queue<int,vector<int>,greater<int>> minH;
    for(int i=0;i<n;i++){
        minH.push(arr[i]);
        if(minH.size()>k)
            minH.pop();
    }
    return minH.top();
}

void kLargest(int arr[], int n, int k){
    priority_queue<int,vector<int>,greater<int>> minH;
    for(int i=0;i<n;i++){
        minH.push(arr[i]);
        if(minH.size()>k)
            minH.pop();
    }
    while(minH.size()!=0){
        cout<<minH.top()<<" ";
        minH.pop();
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k=3;
    cout<<kthLargest(arr,n,k)<<endl;
    kLargest(arr,n,k);
    return 0;
}