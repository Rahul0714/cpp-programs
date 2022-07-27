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

string serialize(node* root){
    queue<node*>q;
    string ans=to_string(root->data)+", ";
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp->left){
            q.push(temp->left);
            ans+=to_string(temp->left->data)+", ";
        }else{
            ans+="#, ";
        }
        if(temp->right){
            q.push(temp->right);
            ans+=to_string(temp->right->data)+", ";
        }else{
            ans+="#, ";
        }
    }
    return ans;
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->right->left=new node(4);
    root->right->right=new node(5);
    string res=serialize(root);
    cout<<res<<" ";
    return 0;
}