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

void zigZag(node* root){
  queue<node*> q;
  q.push(root);
  int leftToRight=true;
  while(!q.empty()){
    int size=q.size();
    vector<int> row(size);
    for(int i=0;i<size;i++){
      node * temp=q.front();
      q.pop();
      int index=leftToRight?i:(size-1-i);
      row[index]=temp->data;
      if(temp->left) q.push(temp->left);
      if(temp->right) q.push(temp->right);
    }
    leftToRight=!leftToRight;
    for(auto i:row)
      cout<<i<<" ";
  }
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->left->left->left=new node(8);
    root->left->right->right=new node(9);
    zigZag(root);
    return 0;
}