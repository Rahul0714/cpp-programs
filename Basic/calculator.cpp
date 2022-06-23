#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    char ch;
    cin>>ch;
    switch(ch){
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        case '%':
        cout<<a%b<<endl;
        break;
        default:
        cout<<"Bad At Maths!";
        break;
    }
    return 0;
}