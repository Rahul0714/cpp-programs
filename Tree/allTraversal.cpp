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

void traverse(node *root){
    stack<pair<node*,int>>s;
    vector<int> pre,in,post;
    s.push({root,1});
    while(!s.empty()){
        auto it=s.top();
        s.pop();
        if(it.second==1){
            pre.push_back(it.first->data);
            it.second++;
            s.push(it);
            if(it.first->left!=NULL){
                s.push({it.first->left,1});
            }
        }  
        else if(it.second==2){
            in.push_back(it.first->data);
            it.second++;
            s.push(it);
            if(it.first->right!=NULL){
                s.push({it.first->right,1});
            }
        }
        else{
            post.push_back(it.first->data);
        }
    }
    cout<<"pre\n";
    for(auto i:pre)
        cout<<i<<" ";
    cout<<"\nin\n";
    for(auto i:in)
        cout<<i<<" ";
    cout<<"\npost\n";
    for(auto i:post)
        cout<<i<<" ";
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    traverse(root);
    return 0;
}