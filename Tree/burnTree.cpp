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

node* findPos(node* root, map<node*,node*> &parent, int start){
    queue<node*> q;
    q.push(root);
    node* ans;
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp->data==start) ans=temp;
        if(temp->left){
            parent[temp->left]=temp;
            q.push(temp->left);
        }
        if(temp->right){
            parent[temp->right]=temp;
            q.push(temp->right);
        }
    }
    return ans;
}

int findTime(map<node*,node*> &parent, node* target){
    queue<node*> q;
    q.push(target);
    map<node*,bool> visited;
    visited[target]=true;
    int timer=0;
    while(!q.empty()){
        int size=q.size();
        bool flag=false;
        for(int i=0;i<size;i++){
            node* temp=q.front();
            q.pop();
            if(temp->left && !visited[temp->left]){
                flag=true;
                visited[temp->left]=true;
                q.push(temp->left);
            }
            if(temp->right && !visited[temp->right]){
                flag=true;
                visited[temp->right]=true;
                q.push(temp->right);
            }
            if(parent[temp] && !visited[parent[temp]]){
                flag=true;
                visited[parent[temp]]=true;
                q.push(parent[temp]);
            }
        }
        if(flag) timer++;
    }
    return timer;
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->left->right=new node(7);
    root->right=new node(3);
    root->right->left=new node(5);
    root->right->right=new node(6);
    map<node*,node*> parent;
    node* target=findPos(root,parent,2);
    int minTime=findTime(parent,target);
    cout<<minTime<<endl;
    return 0;
}