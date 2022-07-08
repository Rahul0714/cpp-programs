#include<bits/stdc++.h>
using namespace std;

int countAnagram(string str, string ang){
    map<char,int> check;
    for(int i=0;i<ang.length();i++)
        check[ang[i]]++;
    int count=check.size();
    int ans=0,i=0,j=0;
    while(j<str.length()){
        if(check.count(str[j])){
            check[str[j]]--;
            if(check[str[j]]==0)
                count--;
        }
        if(j-i+1==ang.length()){
            if(count==0){
                ans++;
            }
            // cout<<check[str[i]]<<" ";
            if(check.count(str[i])){
                check[str[i]]++;
                if(check[str[i]]==1)
                    count++;
            }
            i++;  
        }
        j++;
    }
    return ans;
}

int main()
{
    string str="aabaabaa";
    string ang="aaba";
    cout<<countAnagram(str,ang)<<endl;
    return 0;
}