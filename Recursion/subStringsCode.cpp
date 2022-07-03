#include<iostream>
using namespace std;

void subCode(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    subCode(ros,ans);
    subCode(ros,ans+ch);
    subCode(ros,ans+to_string(code));
}

int main()
{
    string s;
    cin>>s;
    subCode(s,"");
    return 0;
}