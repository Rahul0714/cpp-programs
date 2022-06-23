#include<bits/stdc++.h>
using namespace std;

int main()
{
    int oct,dec=0,temp,i=0;
    cin>>oct;
    while(oct!=0){
        temp=oct%10;
        dec+=(temp*pow(8,i));
        i++;
        oct/=10;
    }
    cout<<dec<<endl;
    return 0;
}