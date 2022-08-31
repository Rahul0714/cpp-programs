#include<iostream>
using namespace std;

int count(int i, int j, string &a, string &b){
    if(i<0 || j<0)
        return 0;
    
        if(a[i]==b[j]){ 
            //cout<<a[i]<<" ";    
            return 1+count(i-1,j-1,a,b);
        }
    return max(count(i-1,j,a,b),count(i,j-1,a,b));
}

int main()
{
    string a="abcd",b="abecde";
    cout<<count(a.size()-1,b.size()-1,a,b)<<endl;
    return 0;
}