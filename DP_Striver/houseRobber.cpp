#include<iostream>
using namespace std;

int sum(int n, int arr[]){
    if(n==0) return arr[0];
    if(n<0) return 0;
    int pick=arr[n]+sum(n-2,arr);
    int notPick=0+sum(n-1,arr);
    return max(pick, notPick);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int temp1[n-1], temp2[n-1];
    for(int i=0;i<n;i++){
        if(i!=0) temp1[i]=arr[i];
        if(i!=n) temp2[i]=arr[n];
    }

    cout<<max(sum(n-2,temp1),sum(n-2,temp2))<<endl;
    return 0;
}