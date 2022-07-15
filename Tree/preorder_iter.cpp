#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};

void preorder(node * root){
    vector<int> ans;
    stack<node*> st;
    st.push(root);
    while(!st.empty()){
        node *temp=st.top();
        st.pop();
        ans.push_back(temp->data);
        if(temp->right!=NULL) st.push(temp->right);
        if(temp->left!=NULL) st.push(temp->left);
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    preorder(root);
    return 0;
}