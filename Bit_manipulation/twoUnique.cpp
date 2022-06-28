#include<iostream>
using namespace std;

int setBits(int n, int pos){
    return (n&(1<<pos))!=0;
}

void findUnique(int arr[], int n){
    int xorSum=0;
    for(int i=0;i<n;i++){
        xorSum=xorSum^arr[i];
    }
    int tempXor=xorSum;
    int setBit=0;
    int pos=0;
    while(setBit!=1){
        setBit=xorSum&1;
        pos++;
        xorSum=xorSum>>1;
    }
    int newXor=0;
    for(int i=0;i<n;i++){
        if(setBits(arr[i],pos-1)){
            newXor=newXor^arr[i];
        }
    }
    cout<<newXor<<endl;
    cout<<(newXor^tempXor)<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    findUnique(arr,n);
    return 0;
}