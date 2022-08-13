#include<iostream>
using namespace std;

int lb(int arr[], int s, int e, int k){
    int size=e;
    int ans=-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]==k) return arr[m];
        else if(k<arr[m]) e=m-1;
        else s=m+1;
    }
    if(s>size) return -1;
    return arr[s];
}

int main()
{
    int arr[6]={1,3,5,7,9,10};
    cout<<lb(arr,0,5,11)<<endl;
    return 0;
}