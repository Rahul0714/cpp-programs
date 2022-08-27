#include<bits/stdc++.h>
using namespace std;

int kJump(int ind, int arr[], int k){
    if(ind==0) return 0;
    int minSteps=INT_MAX;
    for(int i=1;i<=k;i++){
        if(ind-i>=0){
            int jump=kJump(ind-i, arr, k)+abs(arr[ind]-arr[ind-i]);
            minSteps=min(jump,minSteps);
        }
    }
    return minSteps;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k=6;
    cout<<kJump(n-1, arr, k)<<endl;    
    return 0;
}