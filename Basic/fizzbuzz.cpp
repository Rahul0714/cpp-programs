#include<iostream>
using namespace std;
int main(){
    int range;
    cin>>range;
    for(int i=1;i<=range;i++){
        if(i%2 ==0 && i%3 == 0){
            cout<<"fizzbuzz ";
        }else if(i%2==0){
            cout<<"fizz ";
        }else if(i%3==0){
            cout<<"buzz ";
        }else{
            cout<<i<<" ";
        }
    }
    return 0;
}