#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,sum=0,temp;
    cin>>n;
    temp=n;
    while(n!=0){
        sum+=pow((n%10),3);
        n/=10;
    }
    if(sum==temp){
        cout<<"Amstrong Numebr!"<<endl;
    }else{
        cout<<"Not Amstrong Number!"<<endl;
    }
    return 0;
}