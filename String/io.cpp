#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    cout<<str<<endl;
    string str1(5,'r');
    cout<<str1<<endl;
    string str2="Mujubaba";
    cout<<str2<<endl;
    string str3;
    cin.ignore();
    getline(cin,str3);
    cout<<str3<<endl;
    return 0;
}