#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int spaces = n;
    for(int i=1;i<=n;i++){
        for(int k=0;k<spaces;k++){
            cout<<" ";
        }
        spaces--;
        for(int j=1;j<=n;j++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}