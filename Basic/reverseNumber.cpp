#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int newNumber=0,n,temp;
    cin>>n;
    while(n!=0){
        temp=n%10;
        newNumber=(newNumber*(pow(10,1)))+temp;
        n=n/10;
    }
    cout<<newNumber<<endl;
    return 0;
}