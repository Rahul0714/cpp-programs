#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n;
    vector<string> ans;
    cin>>n;
    while(n--){
        cin>>str;
        int len=str.length();
        if(len>10) ans.push_back(str[0]+to_string(len-2)+str[len-1]);
        else ans.push_back(str);
    }
    for(auto i:ans)
        cout<<i<<endl;
    return 0;
}