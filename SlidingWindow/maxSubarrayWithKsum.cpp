#include<iostream>
using namespace std;

int longestSubarrayWithKSum(int arr[], int n, int k){
    int i=0,j=0,sum=0,mx=0;
    while(j<n){
        sum+=arr[j];
        if(sum<k){
            j++;
        }
        if(sum==k){
            mx=max(mx,(j-i+1));
            j++;
        }
        if(sum>k){
            while(sum>k){
                sum-=arr[i];
                i++;
            }
            if(sum==k){
                mx=max(mx,(j-i+1));
            }
            j++;
        }
    }
    return mx;
}

int main()
{
    int arr[]={4,1,1,1,2,3,5};
    cout<<longestSubarrayWithKSum(arr,7,5)<<endl;
    return 0;
}


//FOR NEGETIVE VALUES JAVA CODE 
// -According to one sister
// class Solution{
    
//     public static int lenOfLongSubarr (int arr[], int n, int k) {
//         HashMap<Integer,Integer> map = new HashMap<>();
//         int max = 0;
//         int sum = 0;
        
//         for(int i=0;i<n;i++){
//             sum += arr[i];
//             if(sum == k){
//                 max = Math.max(i+1 , max);
//             }
//             else if(map.containsKey(sum-k)){
//                 max = Math.max(i-map.get(sum-k) , max);
//             }
//             if(!(map.containsKey(sum))){
//                 map.put(sum, i);
                
//             }
//         }
        
//         return max;
//     }
    
    
// }