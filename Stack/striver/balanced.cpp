#include<bits/stdc++.h>
using namespace std;

bool balanced(string s){
    stack<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            st.push(s[i]);
        else{
            switch(s[i]){
                case ')':{
                    if(st.top()=='(') {
                        st.pop();
                        continue;
                    }
                    else return false;
                    break;
                }
                case ']':{
                    if(st.top()=='[') {
                        st.pop();
                        continue;
                    }
                    else return false;
                    break;
                }
                case '}':{
                    if(st.top()=='{') {
                        st.pop();
                        continue;
                    }
                    else return false;
                    break;
                }
                default:{
                    return false;
                }
            }
        }
    }
    if(st.empty()) return true;
    return false;
}

int main()
{
    string s="[()";
    balanced(s)?cout<<"Balanced\n":cout<<"Not Balanced\n";
    return 0;
}