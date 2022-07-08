#include<iostream>
#include<stack>
using namespace std;

int prec(char ch){
    if(ch=='^')
        return 3;
    if(ch=='*'||ch=='/')    
        return 2;
    if(ch=='+'||ch=='-')
        return 1;
    return -1;
}

string infixTopostfix(string input){
    stack<char> st;
    string post;
    for(int i=0;i<input.length();i++){
        if((input[i]>='a'&&input[i]<='z')||(input[i]>='A'&&input[i]<='Z')){
            post+=input[i];
        }
        else if(input[i]=='('){
            st.push(input[i]);
        }
        else if(input[i]==')'){
            while(!st.empty()&&st.top()!='('){
                post+=st.top();
                st.pop();
            }
            if(!st.empty())
                st.pop();
        }
        else{
            while(!st.empty()&&(prec(st.top())>prec(input[i]))){
                post+=st.top();
                st.pop();
                }
            st.push(input[i]);
            }
        }
        while(!st.empty()){
            post+=st.top();
            st.pop();
        }
    return post;
}

int main()
{
    cout<<infixTopostfix("(a-b/c)*(a/k-l)")<<endl;
    return 0;
}