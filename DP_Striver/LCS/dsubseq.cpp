#include<iostream>
using namespace std;

int count(int i, int j, string &a, string &b){
    if(i<0) return 0;
    if(j<0) return 1;
     
    if(a[i]==b[j]) return (count(i-1,j-1,a,b)+count(i-1,j,a,b));
    return count(i-1,j,a,b);
}

int main()
{
    string a="babgbag",b="bag";
    cout<<count(a.size()-1,b.size()-1,a,b)<<endl;
    return 0;
}