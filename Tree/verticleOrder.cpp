#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left,*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

vector<vector<int>> verticleOrder(node* root){
    map<int,map<int,multiset<int>>> nodes;
    queue<pair<node*,pair<int,int>>> q;
    q.push({root,{0,0}});
    while(!q.empty()){
        auto p=q.front();
        q.pop();
        node* temp=p.first;
        int x=p.second.first;
        int y=p.second.second;
        nodes[x][y].insert(temp->data);
        if(temp->left) q.push({temp->left,{x-1,y+1}});
        if(temp->right) q.push({temp->right,{x+1,y+1}});
    }
    vector<vector<int>> ans;
    for(auto p:nodes){
        vector<int> col;
        for(auto q:p.second){
            col.insert(col.end(),q.second.begin(),q.second.end());
        }
        ans.push_back(col);
    }
    return ans;
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->left->right=new node(5);
    root->left->left->right->right=new node(6);
    root->right=new node(3);
    root->right->left=new node(9);
    root->right->right=new node(10);
    vector<vector<int>> ans=verticleOrder(root);
    for(auto i:ans)
        for(int j:i)
            cout<<j<<" ";
    return 0;
}