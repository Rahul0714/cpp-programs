#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};

int diamterOfTree(node* root, int &ans){
    if(root==NULL) return 0;
    int lh=diamterOfTree(root->left,ans);
    int rh=diamterOfTree(root->right,ans);
    ans=max(ans,lh+rh);
    return 1+max(lh,rh);
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    int ans1=0;
    cout<<"Height: "<<diamterOfTree(root,ans1)<<endl;
    cout<<"Diameter: "<<ans1<<endl;
    return 0;
}