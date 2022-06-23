#include<iostream>
#include<math.h>
using namespace std;
bool prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    bool result = prime(n);
    if(result){
        cout<<"Prime!"<<endl;
    }else{
        cout<<"Not Prime!"<<endl;
    }
    return 0;
}