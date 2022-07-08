// #include<iostream>
// #include<queue>
// using namespace std;

// class stack{
//     int N;
//     queue<int> q1;
//     queue<int> q2;
//     public:
//     stack(){
//         N=0;
//     }
//     void push(int x){
//         q2.push(x);
//         N++;
//         while(!q1.empty()){
//             q2.push(q1.front());
//             q1.pop();
//         }
//         queue<int> temp=q1;
//         q1=q2;
//         q2=temp;
//     }
//     void pop(){
//         q1.pop();
//         N--;
//     }
//     int peek(){
//         if(q1.empty())
//             return -1;
//         return q1.front();
//     }
//     int size(){
//         return N;
//     }
// };

// int main()
// {
//     stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     cout<<st.peek()<<endl;
//     st.pop();
//     cout<<st.peek()<<endl;
//     st.pop();
//     st.pop();
//     st.pop();
//     st.pop();
//     cout<<st.peek()<<endl;
//     cout<<st.size()<<endl;
//     return 0;
// }

#include<iostream>
#include<queue>
using namespace std;

class stack{
    int N;
    queue<int> q1;
    queue<int> q2;
    public:
    stack(){
        N=0;
    }
    void push(int x){
        N++;
        q1.push(x);
    }
    void pop(){
        if(q1.size()==0)
            return;
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }
    int peek(){
        if(q1.size()==0)
            return -1;
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int top=q1.front();
        q2.push(top);
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
        return top;
    }
};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    // st.pop();
    cout<<st.peek()<<endl;
    cout<<st.peek()<<endl;
    return 0;
}