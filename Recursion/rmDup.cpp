#include<iostream>
using namespace std;

string rmDup(string s){
    if(s.length()==0)
        return "";
        char ch=s[0];
        string ans=rmDup(s.substr(1));
    if(s[0]==ans[0])    
        return ans;
    return ch+ans;
}

int main()
{
    string s;
    cin>>s;
    cout<<rmDup(s)<<endl;
    return 0;
}