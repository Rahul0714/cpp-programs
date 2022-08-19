#include<iostream>
using namespace std;

int sqrt(int n){
    int s=1;
    int e=n;
    int ans=1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(m*m<=n){
            ans=m;
            s=m+1;
        }
        else e=m-1;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<sqrt(n);
    return 0;
}