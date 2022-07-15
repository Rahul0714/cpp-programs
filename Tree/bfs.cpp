#include<bits/stdc++.h>
using namespace std;

struct node{
    public:
    int data;
    node* left;
    node* right;
    
    node(int val){
        data=val;
        left=right=NULL;
    }
};

void bfs(node* root){
    queue<node*> q;
    vector<int> ans;
    q.push(root);
    while(!q.empty()){
        int qsize=q.size();
        for(int i=0;i<qsize;i++){
            node* temp=q.front();
            q.pop();
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
            ans.push_back(temp->data);
        }
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
}

int main()
{
    vector<int> ans;
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    bfs(root);
    return 0;
}