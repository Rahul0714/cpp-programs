#include<bits/stdc++.h>
using namespace std;

int main()
{
    int dec,oct=0,temp;
    string bin="";
    cin>>dec;
    while(dec!=0){
        bin+=to_string(dec%2);
        dec/=2;
    }
    //reverse(bin.begin(),bin.end());
    cout<<"Binary: "<<bin<<endl;
    for(int i=0;i<bin.length();i++){
        //temp=pow(8,i);
        // oct+=(8*bin[i]);
        cout<<"init oct: "<<oct<<" ";
        oct=oct+(pow(8,i)*(bin[i]-'0'));
        cout<<bin[i]<<"->"<<oct<<" ";
    }
    cout<<"Octal: "<<oct<<endl; 
    return 0;
}
//later:)