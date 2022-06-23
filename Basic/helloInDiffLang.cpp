#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    switch(ch){
        case 'a':
        cout<<"Namaskar";
        break;
        case 'b':
        cout<<"Namaste";
        break;
        case 'c':
        cout<<"Hallo";
        break;
        case 'd':
        cout<<"Hola";
        break;
        case 'e':
        cout<<"Ciao";
        break;
        default:
        cout<<"I'm Learning More..!";
        break;
    }
    return 0;
}