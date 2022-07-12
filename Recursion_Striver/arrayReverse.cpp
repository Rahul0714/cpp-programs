// #include<iostream>
// using namespace std;

// void reverse(int i, int j, int arr[]){
//     if(i>=j)
//         return;
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
//     reverse(i+1,j-1,arr);
// }

// int main()
// {
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++)
    //     cin>>arr[i];
    // reverse(0,n-1,arr);
    // for(auto i:arr)
    //     cout<<i<<" ";
//     return 0;
// }

#include<iostream>
using namespace std;

void reverse(int i, int arr[], int n){
    if(i>=n/2){
        return;
    }
    int temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
    reverse(i+1,arr,n);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    reverse(0,arr,n);
    for(auto i:arr)
        cout<<i<<" ";
    return 0;
}