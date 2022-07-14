#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int start, int end){
    while(start<=end){
        if(s[start++]!=s[end--])
            return false;
    }
    return true;
}

void solve(int ind, string s, vector<string> &path){
    if(ind==s.size()){
        for(auto i:path){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=ind;i<s.size();i++){
        if(isPalindrome(s,ind,i)){
            path.push_back(s.substr(ind,i-ind+1));
            solve(ind+1,s,path);
            path.pop_back();
        }
    }
}

int main()
{
    vector<string> path;
    string s="aabb";
    solve(0,s,path);
    return 0;
}