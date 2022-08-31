#include<bits/stdc++.h>
using namespace std;

int find(int i, vector<int> &arr, int buy, int cap){
    if(cap==0) return 0;
    if(i==arr.size()) return 0;

    int profit=0;
    if(buy){
        profit=max(-arr[i]+find(i+1,arr,0,cap),find(i+1,arr,1,cap));
    }else{
        profit=max(arr[i]+find(i+1,arr,1,cap-1),find(i+1,arr,0,cap));
    }
    return profit;
}

int main()
{
    vector<int> arr={7,1,3,4,5};
    cout<<find(0,arr,1,2)<<endl;
    return 0;
}