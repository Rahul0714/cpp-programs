#include<bits/stdc++.h>
using namespace std;

int find(int i, vector<int> &arr, int buy){
    if(i>=arr.size()) return 0;

    int profit=0;
    if(buy){
        profit=max(-arr[i]+find(i+1,arr,0),find(i+1,arr,1));
    }else{
        profit=max(arr[i]+find(i+2,arr,1),find(i+1,arr,0));
    }
    return profit;
}

int main()
{
    vector<int> arr={7,1,3,4,5};
    cout<<find(0,arr,1)<<endl;
    return 0;
}