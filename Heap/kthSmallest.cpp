#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int n, int k){
    priority_queue<int> maxH;
    for(int i=0;i<n;i++){
        maxH.push(arr[i]);
        if(maxH.size()>k)
            maxH.pop();
    }
    return maxH.top();
}

priority_queue<int> kSmallest(int arr[], int n, int k){
    priority_queue<int> maxH;
    for(int i=0;i<n;i++){
        maxH.push(arr[i]);
        if(maxH.size()>k)
            maxH.pop();
    }
    return maxH;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k=3;
    cout<<kthSmallest(arr,n,k)<<endl;
    priority_queue<int> pq=kSmallest(arr,n,k);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}