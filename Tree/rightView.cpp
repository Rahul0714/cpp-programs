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

void rightView(node* root, int level, vector<int> &ans){
    if(!root) return;
    if(ans.size()==level)
        ans.push_back(root->data);
    rightView(root->right,level+1,ans);
    rightView(root->left,level+1,ans);
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
    rightView(root,0,ans);
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}