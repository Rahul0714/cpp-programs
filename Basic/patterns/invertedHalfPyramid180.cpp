#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int spaces = n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<spaces;j++){
            cout<<"  ";
        }
        for(int j=0;j<(n-spaces);j++){
            cout<<"* ";
        }
        spaces--;
        cout<<endl;
    }
    return 0;
}