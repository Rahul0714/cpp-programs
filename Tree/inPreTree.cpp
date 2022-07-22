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

node* buildTree_(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder,int inStart, int intEnd, map<int,int> &mp){
    if(preStart>preEnd || inStart>intEnd) return NULL;
    node* root= new node(preorder[preStart]);
    int inRoot=mp[root->data];
    int diff=inRoot-inStart;

    root->left=buildTree_(preorder,preStart+1,preStart+diff,inorder,inStart,inRoot-1, mp);
    root->right=buildTree_(preorder,preStart+diff+1,preEnd,inorder,inRoot+1,intEnd,mp);
    return root;
}

node* buildTree(vector<int> &preorder, vector<int> &inorder){
    map<int,int> mp;
    for(int i=0;i<preorder.size();i++){
        mp[inorder[i]]=i;
    }
    node* root=buildTree_(preorder,0,preorder.size()-1,inorder,0,inorder.size(),mp);
    return root;
}

void disp(node* temp){
    if(!temp) return;
    disp(temp->left);
    cout<<temp->data<<" ";
    disp(temp->right);
}

int main()
{
    vector<int> preorder={3,9,20,15,7};
    vector<int> inorder={9,3,15,20,7};
    node* root=buildTree(preorder,inorder);
    disp(root);
    return 0;
}