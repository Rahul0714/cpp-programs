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

int maxWidth(node* root){
    if(!root) return 0;
    queue<pair<node*, int>> q;
    q.push({root,0});
    int ans=0;
    while(!q.empty()){
        int size=q.size();
        int min=q.front().second;
        int first,last;
        for(int i=0;i<size;i++){
            int curId=q.front().second-min;
            node* temp=q.front().first;
            q.pop();
            if(i==0) first=curId;
            if(i==size-1) last=curId;
            if(temp->left) q.push({temp->left,2*curId+1});
            if(temp->right) q.push({temp->right,2*curId+2});
        }
        ans=max(ans,last-first+1);
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
    root->left->left->left=new node(6);
    root->left->right->right=new node(7);
    root->left->left->left->left=new node(8);
    root->left->right->right->right=new node(9);
    cout<<maxWidth(root)<<endl;
    return 0;
}