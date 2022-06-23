
// O(n^2)

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 cout<<(i+1)<<endl;
//                 return 0;
//             }
//         }
//     }
//     return 0;
// }

// Optimised

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minIndex=INT_MAX;
    int id[1e6+2];
    for(int i=0;i<1e6+2;i++){
        id[i]=-1
    }
    for(int i=0;i<n;i++){
        if(id)
    }
    return 0;
}
//complete it 24/06/2022