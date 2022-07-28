#include<bits/stdc++.h>
using namespace std;

int kthSmallest(vector<int> arr, int k){
    priority_queue<int> maxH;
    for(int i=0;i<arr.size();i++){
        maxH.push(arr[i]);
        if(maxH.size()>k)
            maxH.pop();
    }
    return maxH.top();
}

int main()
{
    vector<int> arr={1,3,12,5,15,11};
    int f=kthSmallest(arr,3);
    int s=kthSmallest(arr,6);
    cout<<f<<" "<<s<<endl;
    int sum=0;
    for(auto i:arr)
        if(i>f && i<s)
            sum+=i;
    cout<<sum<<endl;
    return 0;
}