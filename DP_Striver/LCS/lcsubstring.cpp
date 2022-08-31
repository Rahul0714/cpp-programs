#include<iostream>
using namespace std;

int count(int i, int j, string &a, string &b){
    if(i<0 || j<0) return 0;
    if(a[i]==b[j]) 1+count(i-1,j-1,a,b);
    return count(i-1,j-1,a,b);
}

int main()
{
    string a="abcd",b="abcde";
    cout<<count(a.size()-1,b.size()-1,a,b)<<endl;
    return 0;
}