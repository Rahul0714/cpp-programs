
// *******Simple BinarySeach*******

// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int key){
//     int start=0,end=n-1,mid;
//     while(start<=end){
//         mid=(start+end)/2;
//         if(arr[mid]==key)
//             return mid;
//         else if(key>arr[mid])
//             start=mid+1;
//         else
//             end=mid-1;
//     }
//     return -1;
// }

// int main()
// {
//     int n,key;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cin>>key;
//     cout<<binarySearch(arr,n,key)<<endl;
//     return 0;
// }

// *******BinarySeach with SelectionSort*******

// #include<bits/stdc++.h>
// using namespace std;

// int binarySearch(int arr[], int n, int key){
//     int start=0, end=n-1,mid;
//     while(start<=end){
//         mid=(start+end)/2;
//         if(key==arr[mid])
//             return mid;
//         else if(key>arr[mid])
//             start=mid+1;
//         else    
//             end=mid-1;
//     }
//     return -1;
// }

// int * selectionSort(int arr[], int n){
//     int minNo=INT_MAX,temp;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     return arr;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int *sortedArray=selectionSort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<*(sortedArray+i)<<" ";
//     }
//     int key;
//     cin>>key;
//     int result=binarySearch(sortedArray,n,key);
//     cout<<result<<endl;
//     return 0;
// }

// *******BinarySeach with BubbleSort*******

// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int key){
//     int start=0, end=n-1,mid;
//     while(start<=end){
//         mid=(start+end)/2;
//         if(key==arr[mid])
//             return mid;
//         else if(key>arr[mid])
//             start=mid+1;
//         else    
//             end=mid-1;
//     }
//     return -1;
// }

// int * bubbleSort(int arr[], int n){
//     int temp;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     return arr;
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
//     int *sortedArray=bubbleSort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<*(sortedArray+i)<<" ";
//     }
//     int result=binarySearch(sortedArray,n,key);
//     cout<<endl<<result<<endl;
//     return 0;
// }

// *******BinarySeach using InsertionSort*******

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start=0, end=n-1,mid;
    while(start<=end){
        mid=(start+end)/2;
        if(key==arr[mid])
            return mid;
        else if(key>arr[mid])
            start=mid+1;
        else    
            end=mid-1;
    }
    return -1;
}

int * InsertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int curr=arr[i];
        while(arr[j]>curr&&j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
    return arr;
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
    int *sortedArray=InsertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<*(sortedArray+i)<<" ";
    }
    int result=binarySearch(sortedArray,n,key);
    cout<<endl<<result<<endl;
    return 0;
}