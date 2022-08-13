#include<iostream>
#include<vector>
using namespace std;

int peak(vector<int> arr, int s, int e){
    while(s<=e){
        int m=s+(e-s)/2;
        if(m>0 && m<e-1){
            if(arr[m]>arr[m-1] && arr[m]>arr[m+1])
                return arr[m];
            else if(arr[m]>arr[m-1]) s=m+1;
            else if(arr[m]>arr[m+1]) e=m-1; 
        }else if(m==0){
            if(arr[m]>arr[m+1])
                return arr[m];
            return arr[m+1];
        }else if(m==e-1){
            if(arr[m]>arr[m-1])
                return arr[m];
            return arr[m-1];
        }
    }
    return -1;
}

int main()
{
    vector<int> arr={2,3,4,3,2,1};
    cout<<peak(arr,0,arr.size())<<endl;
    return 0;
}
//same as max in bitonic array