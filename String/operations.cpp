#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string s1="Fam";
    // string s2="ily";
    // cout<<s1+s2<<endl;
    // cout<<s1.append(s2)<<endl;

    // cout<<s1[1]<<endl;

    // string abc="Rahul is failure!";
    // abc.clear();
    // cout<<abc<<endl;

// because s1.compare(s2) returns zero
//     string s1="abc";
//     string s2="abc";
//     !s1.compare(s2)?cout<<"Strings are Equal":cout<<"Strings are not Equal";

    // string s="abc";
    // cout<<s<<endl;
    // s.clear();
    // s.empty()?cout<<"Empty!":cout<<"Not Empty";

    // string s="nincompoop";
    // s.erase(6,4);
    // cout<<s<<endl;

    // string s="nincompoop";
    // cout<<s.find("poop")<<endl;

    // string s="I was ";
    // s.insert(6,"lol");
    // cout<<s<<endl;

    // string s="nincompoop";
    // cout<<s.size()<<" "<<s.length()<<endl;

    // for(int i=0;i<s.length();i++){
    //     s[i]=s[i]-32;
    // }
    // cout<<s<<endl;

    // string s="jkvnsnvskjfie";
    // transform(s.begin(),s.end(),s.begin(),::toupper);
    // cout<<s<<endl;
    // transform(s.begin(),s.end(),s.begin(),::tolower);
    // cout<<s<<endl;

    // string num="78709";
    // sort(num.begin(),num.end(),greater<int>());
    // cout<<num<<endl;
    // string s="nincompoop";
    // cout<<s.substr(6,4)<<endl;

    // int x=100;
    // string xs=to_string(x);
    // cout<<xs<<endl;
    // int y=stoi(xs);
    // cout<<y<<endl;

    // string s="nincompoop";
    // sort(s.begin(),s.end());
    // cout<<s<<endl;


    string s="abadcdcabcdazf";
    int arr[26];
    for(int i=0;i<26;i++)
        arr[i]=0;
    for(int i=0;i<s.length();i++){
        arr[s[i]-97]++;
    }
    int max=-1;
    for(int i=0;i<26;i++)
        if(max<arr[i])
            max=arr[i];
    cout<<max<<endl;
    return 0;
}