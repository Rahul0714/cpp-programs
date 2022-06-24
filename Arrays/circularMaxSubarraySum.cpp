#include<iostream>
using namespace std;

int kadane(int arr[], int n){
    int currSum=0,maxSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0)
            currSum=0;
        maxSum=max(maxSum,currSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int noWrap=0;
    int wrap=0;
    noWrap=kadane(arr,n);
    int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }
    wrap=totalSum+kadane(arr,n);
    cout<<max(noWrap,wrap)<<endl;
    return 0;
}