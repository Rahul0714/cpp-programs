#include<bits/stdc++.h>
using namespace std;

stack<int> st;
stack<int> ss;

void push(int el){
    st.push(el);
    if(ss.empty() || el<ss.top())
        ss.push(el);
}

int pop(){
    if(st.empty())
        return -1;
    int ans=st.top();
    st.pop();
    if(ss.top()==ans)
        ss.pop();
    return ans;        
}

int minEl(){
    if(ss.empty())
        return -1;
    return ss.top();
}

int main()
{
    push(1);
    push(2);
    push(0);
    cout<<minEl()<<endl;
    cout<<pop()<<endl;
    cout<<minEl<<endl;
    return 0;
}