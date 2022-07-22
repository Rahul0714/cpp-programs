#include<iostream>
using namespace std;

struct node{
    int data;
    node* left,*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* lca(node* root, node* p, node*q){
    if(root==NULL||root==p||root==q)
        return root;
    node* left=lca(root->left,p,q);
    node* right=lca(root->right,p,q);

    if(left==NULL) return right;
    else if(right==NULL) return left;
    else return root;
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->right->right=new node(7);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->left=new node(6);
    node*ansNode=lca(root,root->left->left,root->left->right->left);
    cout<<ansNode->data<<endl;
    return 0;
}