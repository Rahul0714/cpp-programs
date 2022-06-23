#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],count=0,maxNo=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        maxNo=max(maxNo,arr[i]);
        if(maxNo==arr[i] && arr[i]>arr[i+1]){
            count++;
        }
        }
        if(max(maxNo,arr[n-1])==arr[n-1]){
            count++;
    }
    cout<<count<<endl;
    return 0;
}