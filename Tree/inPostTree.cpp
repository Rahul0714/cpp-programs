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

node* buildTree_(vector<int> &postorder, int postStart, int postEnd, vector<int> &inorder,int inStart, int intEnd, map<int,int> &mp){
    if(postStart>postEnd || inStart>intEnd) return NULL;
    node* root= new node(postorder[postEnd]);
    int inRoot=mp[root->data];
    int diff=inRoot-inStart;

    root->left=buildTree_(postorder,postStart,postStart+diff-1,inorder,inStart,inRoot-1, mp);
    root->right=buildTree_(postorder,postStart+diff,postEnd-1,inorder,inRoot+1,intEnd,mp);
    return root;
}

node* buildTree(vector<int> &postorder, vector<int> &inorder){
    map<int,int> mp;
    for(int i=0;i<postorder.size();i++){
        mp[inorder[i]]=i;
    }
    node* root=buildTree_(postorder,0,postorder.size()-1,inorder,0,inorder.size(),mp);
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
    vector<int> postorder={40,50,20,60,30,10},inorder={40,20,50,10,60,30};
    node* root=buildTree(postorder,inorder);
    disp(root);
    return 0;
}