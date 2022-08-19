#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={10,20,30,10};
    int curr;
    int prev1=0;
    int prev2=0;
    for(int i=1;i<4;i++){
        int left=prev1+abs(arr[i]-arr[i-1]);
        int right=INT_MAX;
        if(i>1)
        right=prev2+abs(arr[i]-arr[i-2]);
        curr=min(left,right);
        prev2=prev1;
        prev1=curr;
    }
    cout<<prev1<<endl;
    return 0;
}