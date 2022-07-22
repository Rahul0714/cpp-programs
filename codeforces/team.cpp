#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    while(n--){
        int sum=0;
        int arr[3];
        for(int i=0;i<3;i++)
            cin>>arr[i];
        for(int i=0;i<3;i++)
            sum+=arr[i];
        if(sum>1)
            count++;
    }
    cout<<count<<endl;
    return 0;
}