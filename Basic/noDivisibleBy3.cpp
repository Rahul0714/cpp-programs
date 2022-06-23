#include<iostream>
using namespace std;
int main(){
    int range;
    cin>>range;
    for(int i=1;i<range;i++){
        if(i%3==0){
            continue;
        }else{
            cout<<i<<" ";
        }
    }
    return 0;
}