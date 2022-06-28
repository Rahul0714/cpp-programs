#include<iostream>
using namespace std;

int fact(int n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}

int main()
{
    int n;
    cin>>n;
    if(n>=1)
        cout<<fact(n)<<endl;
    else
        cout<<"1"<<endl;
    return 0;
}