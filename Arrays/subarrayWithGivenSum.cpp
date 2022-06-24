
// O(n^2)

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
//     int ans,sum=0;
//     cin>>ans;
//     for(int i=0;i<n;i++){
//         sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             if(ans==sum){
//                 cout<<i<<" "<<j<<" "<<"Got it!"<<endl;
//                 return 0;
//             }
//         }
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=0;
    int ans,sum=0;
    cin>>ans;
    while(end<n&&(sum+arr[end])<=ans){
        sum+=arr[end];
        end++;
    }
    if(sum==ans){
        cout<<start+1<<" "<<end<<endl;
        return 0;
    }
    while(end<n){
        sum+=arr[end];
        while(sum>ans){
            sum-=arr[start];
            start++;
        }
        if(sum==ans){
            cout<<start+1<<" "<<end+1<<endl;
            break;
        }
    }
    return 0;
}