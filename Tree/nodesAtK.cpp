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

void markParents(node* root, unordered_map<node*, node*> &parent){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp->left){
            parent[temp->left]=temp;
            q.push(temp->left);
        }
        if(temp->right){
            parent[temp->right]=temp;
            q.push(temp->right);
        }
    }
}

vector<int> findNodes(node* root, node* target, int k){
    unordered_map<node*, node*> parent;
    markParents(root,parent);
    queue<node*> q;
    unordered_map<node*,bool> visited;
    int dist=0;
    q.push(target);
    visited[target]=true;

    while(!q.empty()){
        int size=q.size();
        if(dist++==k) break;
        for(int i=0;i<size;i++){
            node* temp=q.front();
            q.pop();
            if(temp->left&&!visited[temp->left]){
                q.push(temp->left);
                visited[temp->left]=true;
            }
            if(temp->right&&!visited[temp->right]){
                q.push(temp->right);
                visited[temp->right]=true;
            }
            if(parent[temp]&&!visited[parent[temp]]){
                q.push(parent[temp]);
                visited[parent[temp]]=true;
            }
        }
    }

    vector<int> ans;
    while(!q.empty()){
        ans.push_back(q.front()->data);
        q.pop();
    }
    return ans;
}

int main()
{
    struct node* root=new node(3);
    root->left=new node(5);
    root->left->left=new node(6);
    root->left->right=new node(2);
    root->left->right->left=new node(7);
    root->left->right->right=new node(4);
    root->right=new node(1);
    root->right->left=new node(0);
    root->right->right=new node(8);

    for(auto p:findNodes(root,root->left,2)){
        cout<<p<<" ";
    }
    return 0;
}