#include<iostream>
using namespace std;

void update(string s){
    if(s.length()==0)
        return;
    else if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14 ";
        update(s.substr(2));
    }else{
        cout<<s[0]<<" ";
        update(s.substr(1));
    }
}

int main()
{
    string s="pippxxppiipi";
    update(s);
    return 0;
}