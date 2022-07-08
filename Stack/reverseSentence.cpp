// #include<iostream>
// using namespace std;
// #define n 100

// class Stack{
//     char *arr;
//     int top;
//     public:
//     Stack(){
//         arr=new char[n];
//         top=-1;
//     }
//     void push(char ch){
//         if(top==(n-1)){
//             cout<<"Stack Overflow"<<endl;
//             return;
//         }
//         top++;
//         arr[top]=ch;
//     }
//     void print(){
//         if(top==-1)
//             return;
//         while(top!=-1){
//             cout<<arr[top]<<" ";
//             top--;
//         }
//     }
// };

// int main()
// {
//     Stack st;
//     st.push('R');
//     st.push('A');
//     st.push('H');
//     st.push('U');
//     st.push('L');
//     st.print();
//     return 0;
// }

#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' '&&i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
        }
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
    }cout<<endl;
}

int main()
{
    string s="Hey, how are you doing?";
    reverseSentence(s);
    return 0;
}