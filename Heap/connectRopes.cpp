#include<bits/stdc++.h>
using namespace std;

int cost(vector<int> arr, int n){
    priority_queue<int,vector<int>,greater<int>> minH;
    for(auto e:arr)
        minH.push(e);
    int val=0;
    while(minH.size()>1){
        int first=minH.top();
        minH.pop();
        int second=minH.top();
        minH.pop();
        val+=first+second;
        minH.push(first+second);
    }
    return val;
}

int main()
{
    vector<int> arr={1,2,3,4,5};
    cout<<cost(arr,5)<<endl;   
    return 0;
}