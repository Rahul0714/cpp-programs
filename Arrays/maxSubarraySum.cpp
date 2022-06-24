
// O(n^2)

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum,maxSum=INT_MIN;
//     for(int i=0;i<n;i++){
//         sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             maxSum=max(maxSum,sum);
//         }
//     }
//     cout<<maxSum<<endl;
//     return 0;
// }

// O(n)-> Kadane's Algorithm
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxSum=INT_MIN,currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum=max(maxSum,currSum);
    }
    cout<<maxSum<<endl;
    return 0;
}