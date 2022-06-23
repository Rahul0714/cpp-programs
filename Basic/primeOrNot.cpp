#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    if(n==1){
        cout<<"Not Prime"
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not Prime!"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Prime!"<<endl;
    }
    return 0;
}