#include<iostream>
#include<queue>
using namespace std;

void firstNegInKSubarrays(int arr[], int n, int k){
    int i=0,j=0;
    queue<int> q;
    while(j<n){
        if(arr[j]<0){
            q.push(arr[j]);
        }
        if(j-i+1==k){
            if(q.empty()){
                cout<<"0 ";
            }
            cout<<q.front()<<" ";
            if(arr[i]==q.front()){
                q.pop();
            }
                i++;
        }
        j++;
    }
}

int main()
{
    int arr[] = {12,-1,-7,8,-15,30,16,28};
    firstNegInKSubarrays(arr,8,3);
    return 0;
}