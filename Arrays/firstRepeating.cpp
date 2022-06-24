#include<iostream>
#include<climits>
using namespace std;
const int N=1e6+2;
int idx[N];
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    for(int i=0;i<N;i++)
        idx[i]=-1;
    int minNo=INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[arr[i]]==-1){
            idx[arr[i]]=i;
            //cout<<idx[arr[i]]<<" ";
        }else{
            minNo=min(minNo,idx[arr[i]]);
        }
    }
    cout<<minNo<<endl;
    return 0;
}