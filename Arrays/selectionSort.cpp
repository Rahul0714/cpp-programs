#include<iostream>
using namespace std;

int * selectionSort(int arr[], int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
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
    int *sortedArr = selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<*(sortedArr+i)<<" ";
    }
    cout<<endl;
    return 0;
}