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
    
    return 1+max(lh,rh);
}

int levelDepth(node* root){
    //done it
    queue<node*> q;
    vector<int> ans;
    q.push(root);
    int lh=0,rh=0;
    while(!q.empty()){
        node* temp= q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->left!=NULL){ 
            lh++;
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            rh++;
            q.push(temp->right);
        } 
    }
    return 1+max(lh,rh);
}

int main()
{
    struct node* root=new node(1);
    // root->left=new node(2);
    // root->right=new node(3);
    // root->right->right=new node(4);
    // root->right->right->right=new node(5);
    // root->right->right->right->left=new node(6);
    // root->right->right->right->right=new node(7);
    cout<<maxDepth(root)<<endl;
    cout<<levelDepth(root)<<endl;
    return 0;
}