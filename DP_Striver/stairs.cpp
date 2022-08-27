#include<iostream>
using namespace std;

int s(int n){
    if(n<=1) return 1;
    return s(n-1) + s(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<s(n)<<endl;
    return 0;
}