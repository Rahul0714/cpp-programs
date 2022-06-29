// #include<iostream>
// using namespace std;

// int lastOccurance(int arr[], int n, int key){
//     if(n<0)
//         return -1;
//     if(arr[n]==key)
//         return n;
//     return lastOccurance(arr,n-1,key);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     int key;
//     cin>>key;
//     cout<<lastOccurance(arr,n-1,key)<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;

int lastOccurance(int arr[], int n, int i, int key){

    if(i==n)
        return -1;

    int restArray=lastOccurance(arr,n,i+1,key);
    if(restArray!=-1)
        return restArray;
    if(arr[i]==key)
        return i;
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int key;
    cin>>key;
    cout<<lastOccurance(arr,n-1,0,key)<<endl;
    return 0;
}