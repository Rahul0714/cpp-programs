#include<iostream>
using namespace std;

struct node{
    int data;
    node* left, *right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

bool isSymmetric(node* left, node* right){
    if(left==NULL || right==NULL)  
        return left==right;
    if(left->data!=right->data) 
        return false;
    return isSymmetric(left->left,right->right) && isSymmetric(left->right,right->left);
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(2);
    root->left->right=new node(4);
    root->left->left=new node(3);
    root->right->left=new node(4);
    root->right->right=new node(3);
    cout<<isSymmetric(root->left,root->right)<<endl;
    return 0;
}