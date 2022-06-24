#include<iostream>
using namespace std;
const int N=1e6+2;
bool idx[N];
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<N;i++)
        idx[i]=false;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            idx[arr[i]]=true;
        }
    }
    int ans=-1;
    for(int i=1;i<N;i++){
        if(!idx[i] && i<n){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}