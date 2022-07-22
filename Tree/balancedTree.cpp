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

int maxDepth(node *root){
    if(root==NULL) return 0;
    
    int lh=maxDepth(root->left);
    int rh=maxDepth(root->right);
    if(lh==-1||rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    return 1+max(lh,rh);
}

int balanced(node* root){
    if(root==NULL)
        return 0;
    int lh=balanced(root->left);
    if(lh==-1) return -1;
    int rh=balanced(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    return 1+max(lh,rh);
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->right=new node(6);
    //int res=maxDepth(root);
    int res=balanced(root);
    res==-1?cout<<"Unbalanced":cout<<"Balanced"<<endl;
    return 0;
}