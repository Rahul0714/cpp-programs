#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag =0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=1;
            cout<<"Not Prime!"<<endl;
            break;
        }
    }
    if(!flag){
        cout<<"Prime!"<<endl;
    }
    return 0;
}