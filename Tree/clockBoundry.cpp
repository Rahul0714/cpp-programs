#include<bits/stdc++.h>
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

bool isLeaf(node* root){
    if(root->left==NULL && root->right==NULL) return true;
    return false;
}

void leftBoundry(node* root, vector<int> &ans){
    node* cur=root->left;
    stack<int> s;
    while(cur){
        if(!isLeaf(cur)) s.push(cur->data);
        if(cur->left) cur=cur->left;
        else cur=cur->right;
    }
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
}
void rightBoundry(node* root, vector<int> &ans){
    node* cur=root->right;
    while(cur){
        if(!isLeaf(cur)) ans.push_back(cur->data);
        if(cur->left) cur=cur->left;
        else cur=cur->right;
    }
}

void leafNodes(node* root, vector<int> &ans, stack<int> &leaf){

    if(isLeaf(root)){
        leaf.push(root->data);
        return;
    }

    if(root->left) leafNodes(root->left,ans,leaf);
    if(root->right) leafNodes(root->right,ans,leaf);
}

void display(vector<int> ans){
    for(auto i: ans)
        cout<<i<<" ";
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(3);
    root->left->left->right=new node(4);
    root->left->left->right->left=new node(5);
    root->left->left->right->right=new node(6);
    root->right=new node(7);
    root->right->right=new node(8);
    root->right->right->left=new node(9);
    root->right->right->left->left=new node(10);
    root->right->right->left->right=new node(11);
    vector<int> ans;
    ans.push_back(root->data);
    // cout<<"1";
    rightBoundry(root,ans);
    // cout<<"1";
    stack<int> leaf;
    leafNodes(root,ans,leaf);
    while(!leaf.empty()){
        ans.push_back(leaf.top());
        leaf.pop();
    }
    // cout<<"1";
    leftBoundry(root,ans);
    // cout<<"1";
    display(ans);
    return 0;
}