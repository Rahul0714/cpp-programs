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

int findLeftHeight(node* root){
    int height=0;
    while(root){
        height++;
        root=root->left;
    }
    return height;
}

int findRightHeight(node* root){
    int height=0;
    while(root){
        height++;
        root=root->right;
    }
    return height;
}

int countNodes(node* root){
    if(!root) return 0;
    int lh=findLeftHeight(root);
    int rh=findRightHeight(root);
    if(lh==rh) return (pow(lh,2))-1;
    return 1+countNodes(root->left)+countNodes(root->right);
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    int count=countNodes(root);
    cout<<count<<endl;
    return 0;
}