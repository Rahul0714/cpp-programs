#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void flat(node* &root,node* &prev){
    if(root==NULL) return;
    flat(root->right,prev);
    flat(root->left,prev);
    root->right=prev;
    root->left=NULL;
    prev=root;
}

void flatIter(node* root){
    if(!root) return;
    stack<node*> st;
    st.push(root);
    while(!st.empty()){
        node* cur=st.top(); st.pop();
        if(cur->right) st.push(cur->right);
        if(cur->left) st.push(cur->left);
        if(!st.empty())
            cur->right=st.top();
        cur->left=NULL;
    }
}

void disp(node* root){
    if(!root) return;
    disp(root->left);
    cout<<root->data<<" ";
    disp(root->right);
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    node* prev=NULL;
    flat(root,prev);
    disp(root);
    cout<<endl;
    flatIter(root);
    disp(root);
    return 0;
}