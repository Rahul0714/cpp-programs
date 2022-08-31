#include<bits/stdc++.h>
using namespace std;

void print(int ind, string arr,vector<char> ds, int n){
    if(ind==n){
        for(auto i:ds)
            cout<<i<<" ";
        cout<<endl;
        return;
    }
    ds.push_back(arr[ind]);
    print(ind+1, arr, ds, n);
    ds.pop_back();
    print(ind+1,arr,ds, n);
}

int main()
{
    string arr="abc";
    vector<char> ds;
    print(0,arr,ds,arr.size());
    return 0;
}