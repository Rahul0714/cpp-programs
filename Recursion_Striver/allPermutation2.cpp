#include<bits/stdc++.h>
using namespace std;

void compute(int ind, vector<int> arr){
    if(ind==arr.size()){
        for(auto i:arr){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=ind;i<arr.size();i++){
        swap(arr[ind],arr[i]);
        compute(ind+1,arr);
        swap(arr[ind],arr[i]);
    }
}

int main()
{
    vector<int> arr={1,2,3};
    compute(0,arr);
    return 0;
}