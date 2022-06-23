#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string hex="";
    int dec=0,j=0,temp=0;
    cin>>hex;
    for(int i=hex.size()-1;i>=0;i--){
        if(hex[i]>='0' && hex[i]<='9')
            dec=dec+((hex[i]-'0')*pow(16,j));
        else if(hex[i]>='A'&& hex[i]<='F')
            dec=dec+(((hex[i]-'A')+10)*pow(16,j));
        j++;
    }
    cout<<dec<<endl;
    return 0;
}