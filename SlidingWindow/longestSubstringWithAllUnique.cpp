#include<iostream>
#include<map>
using namespace std;

int longestSubstringWithAllUnique(string str){
    int i=0,j=0,mx=0;
    map<char,int> mp;
    while(j<str.size()){
        mp[str[j]]++;
        if(mp.size()==(j-i+1)){
            mx=max(mx,(j-i+1));
        }
        if(mp.size()<(j-i+1)){
            while(mp.size()<(j-i+1)){
                mp[str[i]]--;
                if(mp[str[i]]==0)
                    mp.erase(str[i]);
                i++;
            }
            if(mp.size()==(j-i+1))
                mx=max(mx,(j-i+1));
        }
        j++;
    }
    return mx;
}

int main()
{
    string str="pwwkew";
    cout<<longestSubstringWithAllUnique(str)<<endl;   
    return 0;
}