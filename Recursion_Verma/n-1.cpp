#include<iostream>
using namespace std;

void n_one(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    n_one(n-1);
}

int main()
{
    int n;
    cin>>n;
    n_one(n);
    return 0;
}