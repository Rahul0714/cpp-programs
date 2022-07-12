#include<iostream>
using namespace std;

bool check(int i, int j, string str){
    if(i>=j){
        return true;
    }
    return (str[i]==str[j]) && check(i+1,j-1,str);
}

int main()
{
    string str="";
    cin>>str;
    cout<<check(0,str.length()-1,str)<<endl;
    return 0;
}