#include<iostream>
#include<vector>
using namespace std;

bool sum(int n, vector<int> &arr, int k){
    if(k==0) return true;
    if(n==0) return (arr[0]==k);

    bool np=sum(n-1,arr,k);
    bool p=false;
    if(arr[n]<=k)
        p=sum(n-1,arr,k-arr[n]);
    
    return p || np;
}

int main()
{
    vector<int> arr={1,2,3,4,2};
    int k;
    int totSum=0;
    for(int i=0;i<arr.size();i++)
        totSum+=arr[i];
    if(totSum%2) cout<<"No";
    else {
        k=totSum/2;
        cout<<sum(arr.size()-1,arr,k)<<endl;
    }
    return 0;
}