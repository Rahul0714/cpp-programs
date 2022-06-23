#include<iostream>
using namespace std;

int * insertionSort(int arr[], int n){
    int j,current;
    for(int i=1;i<n;i++){
        current=arr[i];
        j=i-1;
        while(arr[j]>current&&j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    return arr;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *sortedArray=insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<*(sortedArray+i)<<" ";
    }
    cout<<endl;
    return 0;
}