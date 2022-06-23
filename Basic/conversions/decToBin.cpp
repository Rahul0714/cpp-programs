#include<iostream>
#include<string.h>

using namespace std;
int main(){
    int dec;
    cin>>dec;
    string bin="";
    while(dec!=0){
        bin+=to_string(dec%2);
        dec/=2;
    }
    for(int i=bin.length()-1;i>=0;i--){
        cout<<bin[i];
    }
    cout<<endl;
    return 0;
}