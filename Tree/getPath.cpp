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

bool getPath(node* root, vector<int> &ans, int x){
    if(!root) return false;
    ans.push_back(root->data);
    if(root->data==x)
        return true;
    if(getPath(root->left,ans,x)||getPath(root->right,ans,x))
        return true;
    ans.pop_back();
    return false;
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->left=new node(6);
    root->left->right->right=new node(7);
    vector<int> ans;
    getPath(root,ans,7);
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}