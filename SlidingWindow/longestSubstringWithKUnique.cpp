#include<iostream>
#include<map>
using namespace std;

int longestSubstringWithKUnique(string str, int k){
    int i=0,j=0,mx=0;
    map<char,int> mp;
    while(j<str.length()){
        mp[str[j]]++;
        if(mp.size()<k)
            j++;
        if(mp.size()==k){
            mx=max(mx,(j-i+1));
            j++;
        }
        if(mp.size()>k){
            while(mp.size()>k){
                mp[str[i]]--;
                if(mp[str[i]]==0)
                    mp.erase(str[i]);
                i++;
            }
            if(mp.size()==k){
            mx=max(mx,(j-i+1));
            }
            j++;
        }
    }
    return mx;
}

int main()
{
    string str="aabacbebebe";
    cout<<longestSubstringWithKUnique(str,3);
    return 0;
}