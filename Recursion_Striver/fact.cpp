// #include<iostream>
// using namespace std;

// int fact(int n){
//     if(n==0)
//         return 1;
//     return n*fact(n-1);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fact(n)<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;

void fact(int n, int ans){
    if(n==1){
        cout<<ans<<endl;
        return;
    }
    fact(n-1,ans*n);
}

int main()
{
    int n;
    cin>>n;
    fact(n,1);
    return 0;
}