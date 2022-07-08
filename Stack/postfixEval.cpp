#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int postfixEvaluation(string s){
    stack<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0'&&s[i]<='9'){
            st.push(s[i]-'0');
        }else{
            int operand1=st.top();
            st.pop();
            int operand2=st.top();
            st.pop();
            switch(s[i]){
                case '+':
                    st.push(operand2+operand1);
                    break;
                case '-':
                    st.push(operand2-operand1);
                    break;
                case '*':
                    st.push(operand2*operand1);
                    break;
                case '/':
                    st.push(operand2/operand1);
                    break;
                case '^':
                    st.push(pow(operand2,operand1));
                    break;
            }
        }
        // cout<<st.top()<<" ";
    }
    return st.top();
}

int main()
{
    string input="46+2/5*7+";
    cout<<postfixEvaluation(input)<<endl;
    return 0;
}