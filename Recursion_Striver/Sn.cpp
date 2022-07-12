// #include<iostream>
// using namespace std;

// int sum(int n){
//     if(n==0)
//         return 0;
//     return n+sum(n-1);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<sum(n)<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;

void sum(int i, int isum){
    if(i==0){
        cout<<isum<<endl;
        return;
    }
    sum(i-1,isum+i);
}

int main()
{
    int n;
    cin>>n;
    sum(n,0);
    return 0;
}