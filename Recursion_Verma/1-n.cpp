#include<iostream>
using namespace std;

void one_n(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    one_n(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    one_n(n);    
    return 0;
}