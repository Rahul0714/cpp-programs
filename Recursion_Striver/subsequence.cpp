#include<bits/stdc++.h>
using namespace std;

void subsequence(int i, vector<char> ans, string str, int n){
    if(i==n){
        for(auto j:ans){
            cout<<j<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(str[i]);
    subsequence(i+1,ans,str,n);
    ans.pop_back();
    subsequence(i+1,ans,str,n);
}

int main()
{
    string str="abc";
    vector<char> ans;
    subsequence(0,ans,str,str.length());
    return 0;
}