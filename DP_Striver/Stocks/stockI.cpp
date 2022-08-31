#include<bits/stdc++.h>
using namespace std;

int find(int n, vector<int> &arr){
    int mini=arr[0], profit=0;
    for(int i=1;i<n;i++){
        int cost=arr[i]-mini;
        profit=max(cost,profit);
        mini=min(mini,arr[i]);
    }
    return profit;
}

int main()
{
    vector<int> arr={7,1,3,4,5};
    cout<<find(arr.size(),arr)<<endl;
    return 0;
}