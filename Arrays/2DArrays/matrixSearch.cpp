
// O(MN)

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++)
//         for(int j=0;j<m;j++)
//             cin>>arr[i][j];
//     int key;
//     cin>>key;
//     for(int i=0;i<n;i++)
//         for(int j=0;j<m;j++)
//             if(arr[i][j]==key){
//                 cout<<true<<endl;
//                 return 0;
//                 }
//     cout<<false<<endl;
//     return 0;
// }

// O(N)

#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    int key;
    cin>>key;
    int r=0,c=m-1;
    while(r<n && c>=0){
        if(arr[r][c]==key){
            cout<<true<<endl;
            return 0;
        }else if(arr[r][c]>key){
            c--;
        }else{
            r++;
        }
    }
    cout<<false<<endl;
    return 0;
}