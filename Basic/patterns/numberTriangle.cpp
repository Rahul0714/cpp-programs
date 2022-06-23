#include<iostream>
using namespace std;
int main(){
    int n,spaces;
    cin>>n;
    spaces=n-1;
    for(int i=1;i<=n;i++){
        for(int i=0;i<spaces;i++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        spaces--;
        cout<<endl;
    }
    return 0;
}