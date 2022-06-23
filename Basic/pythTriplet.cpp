#include<iostream>
#include<math.h>
using namespace std;

bool isTriplet(int a, int b, int c){
    if((pow(a,2)+pow(b,2))== pow(c,2)|| (pow(b,2)+pow(c,2))== pow(a,2)||(pow(a,2)+pow(c,2))==pow(b,2)){
        return 1;
    }
    return 0;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(isTriplet(a,b,c)){
        cout<<"Yes!"<<endl;
    }else{
        cout<<"No!"<<endl;
    }
    return 0;
}