#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<" is Greatest\n";
    }else if(b>c){
        cout<<b<<" is Greatest\n";
    }else{
        cout<<c<<" is Greatest\n";
    }
    return 0;
}