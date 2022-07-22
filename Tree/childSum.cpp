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

void childSum(node* root){
    if(!root) return;
    int child=0;
    if(root->left) child+=root->left->data;
    if(root->right) child+=root->right->data;
    if(child>=root->data){
        root->data=child;
    }else{
        if(root->left) root->left->data=root->data;
        else if(root->right) root->right->data=root->data;
    }
    childSum(root->left);
    childSum(root->right);
    int tot=0;
    if(root->left) tot+=root->left->data;
    if(root->right) tot+=root->right->data;
    if(root->left|| root->right) root->data=tot;
}

void display(node* root){
    if(!root) return;
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    childSum(root);
    display(root);
    return 0;
}