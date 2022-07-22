#include<bits/stdc++.h>
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

void leftView(node* root, int level, vector<int> &ans){
    if(root==NULL) return;
    if(level==ans.size())
        ans.push_back(root->data);
    leftView(root->left,level+1,ans);
    leftView(root->right,level+1,ans);
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
    vector<int> ans;
    leftView(root,0,ans);
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}