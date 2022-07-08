// brute force

// #include<iostream>
// using namespace std;

// int maxInKSubarrays(int arr[],int n,int k){
//     int max=-1;
//     for(int i=0;i<=n-k;i++){
//         int sum=0;
//         for(int j=i;j<i+k;j++){
//                 sum+=arr[j];
//         }
//         if(sum>max)
//             max=sum;
//     }
//     return max;
// }

// int main()
// {
    // int arr[]={2,3,5,2,9,7,1};
    // for(auto i:arr)
    //     cout<<i<<" ";
    //     cout<<endl;
    // cout<<maxInKSubarrays(arr,7,3);
//     return 0;
// }
#include<iostream>
using namespace std;

int maxInKSubarrays(int arr[], int n, int k){
    int i=0, j=0,sum=0,mx=-1;
    while(j<n){
        sum+=arr[j];
        if(j-i+1==k){
            // cout<<sum<<" ";
            mx=max(sum,mx);
            sum-=arr[i];
            i++;
        }
        j++;
    }
    return mx;
}

int main()
{
    int arr[]={2,3,5,2,9,7,1};
    for(auto i:arr)
        cout<<i<<" ";
        cout<<endl;
    cout<<maxInKSubarrays(arr,7,3);
    return 0;
}