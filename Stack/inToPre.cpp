#include<iostream>
#include<stack>
using namespace std;

string reverse(string s){
    string rev="";
    for(int i=s.length()-1;i>=0;i--){
        rev+=s[i];
    }
    cout<<rev<<endl;
    for(int i=0;i<rev.length();i++){
        if(rev[i]==')'){
            rev[i]='(';
            continue;
        }
        if(rev[i]=='('){
            rev[i]=')';
            continue;
        }
    }
    return rev;
}

int prec(char ch){
    if(ch=='^')
        return 3;
    if(ch=='*'||ch=='/')
        return 2;
    if(ch=='+'||ch=='-')   
        return 1;
    return -1;
}

string infixToprefix(string input){
    string s=reverse(input);
   stack<char> st;
   string pre="";
   for(int i=0;i<s.length();i++){
    if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
        pre+=s[i];
    }
    else if(s[i]=='('){
        st.push(s[i]);
    }
    else if(s[i]==')'){
        while(!st.empty()&&st.top()!='('){
            pre+=st.top();
            st.pop();
        }
        if(!st.empty())
            st.pop();
    }
    else{
        while(!st.empty()&&(prec(st.top()))>(prec(s[i]))){
            pre+=st.top();
            st.pop();
        }
        st.push(s[i]);
    }
   }
   while(!st.empty()){
    pre+=st.top();
    st.pop();
   }
   string realPre=reverse(pre);
   return realPre;
}

int main()
{
    cout<<infixToprefix("(a-b/c)*(a/k-l)")<<endl;
    return 0;
}