#include<iostream>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ans[n];
    permute(arr,ans);
    return 0;
}