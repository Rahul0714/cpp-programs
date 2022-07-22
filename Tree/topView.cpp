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

vector<int> topView(node* root){
    vector<int> ans;
    if(!root) return ans;
    map<int,int> mp;
    queue<pair<node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto p=q.front();
        q.pop();
        node* temp=p.first;
        int line=p.second;
        if(mp.find(line)==mp.end()) mp[line]=temp->data;
        if(temp->left) q.push({temp->left,line-1});
        if(temp->right) q.push({temp->right,line+1});
    }
    for(auto i:mp)
        ans.push_back(i.second);
    return ans;
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->left=new node(6);
    root->right=new node(3);
    root->right->right=new node(7);
    vector<int> ans=topView(root);
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}