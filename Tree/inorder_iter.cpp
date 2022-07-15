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

void inorder(node* root){
    vector<int> ans;
    stack<node*> st;
    node* temp=root;
    while(true){
        if(temp!=NULL){
            st.push(temp);
            temp=temp->left;
        }else{
            if(st.empty()) break;
            temp=st.top();
            st.pop();
            ans.push_back(temp->data);
            temp=temp->right;
        }
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
    inorder(root);
    return 0;
}