#include<iostream>
using namespace std;

int numberOf1s(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    cout<<numberOf1s(n)<<endl;
    return 0;
}