#include<iostream>
using namespace std;

void piBy3_14(string str){
    if(str.length()==0)
        return;
    if(str[0]=='p' && str[1]=='i'){
        cout<<"3.14";
        piBy3_14(str.substr(2));
    }else{
        cout<<str[0];
        piBy3_14(str.substr(1));
    }
}

int main()
{
    string str;
    cin>>str;
    piBy3_14(str);
    return 0;
}