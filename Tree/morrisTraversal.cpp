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

vector<int> inorder(node* root){
    vector<int> ans;
    if(!root) return ans;
    node* cur=root;
    while(cur!=NULL){
        if(cur->left==NULL){
            ans.push_back(cur->data);
            cur=cur->right;
        }else{
            node* temp=cur->left;
            while(temp->right&& temp->right!=cur){
                temp=temp->right;
            }
            if(temp->right==NULL){
                temp->right=cur;
                cur=cur->left;
            }else{
                temp->right=NULL;
                ans.push_back(temp->data);
                cur=cur->right;
            }
        }
    }
    return ans;
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    vector<int> ans=inorder(root);
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}