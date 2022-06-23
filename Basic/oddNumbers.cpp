#include<iostream>
using namespace std;
int main(){
    int range;
    cin>>range;
    for(int i=0;i<=range;i++){
        if(i%2==0){
            continue;
        }else{
            cout<<i<<" ";
        }
    }
    return 0;
}
