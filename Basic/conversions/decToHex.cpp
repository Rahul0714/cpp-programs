#include<iostream>
using namespace std;

int main()
{
    int dec,temp;
    string hex="";
    cin>>dec;
    while(dec>0){
        temp=dec%16;
        dec/=16;
        if(temp>=10 && temp<= 15){
            hex+=((char)55+temp);
        }else{
            hex+=to_string(temp);
        }
    }
    for(int i=hex.size()-1;i>=0;i--){
        cout<<hex[i];
    }
    cout<<endl;
    return 0;
}