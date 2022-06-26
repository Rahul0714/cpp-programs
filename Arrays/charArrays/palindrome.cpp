#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int i=0,j=n-1;
    cout<<arr[i]<<" "<<arr[j]<<endl;
    while(i<=j){
        if(arr[i]!=arr[j]){
            cout<<"Not Palindrome"<<endl;
            return 0;
        }
        i++;
        j--;
    }
    cout<<"Palindrome"<<endl;
    return 0;
}