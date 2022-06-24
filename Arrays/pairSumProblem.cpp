
// O(N^2)

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
//     int k;
//     cin>>k;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==k){
//                 cout<<true<<endl;
//                 return 0;
//             }
//         }
//     }
//     cout<<false<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;

int * bubbleSort(int arr[], int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr;
}

bool isPresent(int arr[], int n, int k){
    int s=0,e=n-1,sum=0;
    while(s<e){
        sum=arr[s]+arr[e];
        if(sum==k)
            return 1;
        else if(sum>k)
            e--;
        else    
            s++;
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *sortedArray=bubbleSort(arr,n);
    int k;
    cin>>k;
    cout<<isPresent(sortedArray,n,k)<<endl;
    return 0;
}