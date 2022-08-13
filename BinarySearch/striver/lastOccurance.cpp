#include<iostream>
using namespace std;

int find(int arr[], int s, int e, int k){
    int ans=-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]==k){
            ans=m;
            s=m+1;
        }
        else if(k<arr[m]) e=m-1;
        else s=m+1;
    }
    return ans;
}

int main()
{
    int arr[9]={1,2,2,2,3,4,4,4,5};
    cout<<find(arr,0,8,4)<<endl;
    return 0;
}