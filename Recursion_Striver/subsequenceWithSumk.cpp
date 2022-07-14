// #include<bits/stdc++.h>
// using namespace std;

// void subsequence(int i,vector<int> ans,int k, int arr[],int n){
//     if(i==n){
//         int sum=0;
//         for(auto i:ans){
//             sum+=i;
//         }
//         if(sum==k){
//             for(auto i:ans){
//                 cout<<i<<" ";
//             }
//             cout<<endl;
//         }  
//         return;
//     }
//     ans.push_back(arr[i]);
//     subsequence(i+1,ans,k,arr,n);
//     ans.pop_back();
//     subsequence(i+1,ans,k,arr,n);
// }

// int main()
// {
//     int arr[] ={1,2,1};
//     int k=2;
//     vector<int> ans;
//     subsequence(0,ans,k,arr,3);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// void subsequence(int i, int n,int k, vector<int> ans, int arr[], int sum){
//     if(i==n){
//         if(sum==k){
//             for(auto i:ans){
//                 cout<<i<<" ";
//             }
//             cout<<endl;
//         }
//         return;
//     }
//     ans.push_back(arr[i]);
//     sum+=arr[i];
//     subsequence(i+1,n,k,ans,arr,sum);
//     ans.pop_back();
//     sum-=arr[i];
//     subsequence(i+1,n,k,ans,arr,sum);
// }

// int main()
// {
//     int arr[]={1,2,1};
//     int n=3;
//     int sum=2;
//     vector<int> ans;
//     subsequence(0,n,sum,ans,arr,0);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

// bool subsequence(int i, int n,int k, vector<int> ans, int arr[], int sum){
//     if(i==n){
//         if(sum==k){
//             for(auto i:ans){
//                 cout<<i<<" ";
//             }
//             cout<<endl;
//             return true;
//         }
//         return false;
//     }
//     ans.push_back(arr[i]);
//     sum+=arr[i];
//     if(subsequence(i+1,n,k,ans,arr,sum))
//         return true;
//     ans.pop_back();
//     sum-=arr[i];
//     if(subsequence(i+1,n,k,ans,arr,sum))
//         return true;
//     return false;
// }

// int main()
// {
//     int arr[]={1,2,1};
//     int n=3;
//     int sum=2;
//     vector<int> ans;
//     subsequence(0,n,sum,ans,arr,0);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int subsequence(int i, int n,int k, int arr[], int sum){
    if(i==n){
        if(sum==k){
            return 1;
        }
        return 0;
    }
    sum+=arr[i];
    int l=subsequence(i+1,n,k,arr,sum);
    sum-=arr[i];
    int r=subsequence(i+1,n,k,arr,sum);
    return l+r;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int sum=5;
    cout<<subsequence(0,n,sum,arr,0)<<endl;
    return 0;
}