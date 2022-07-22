#include<iostream>
using namespace std;

struct node{
    int data;
    node* left,right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void boundry(node* root){

}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    if(root==NULL) cout<<"Empty"<<endl;
    if(isLeaf(root)) cout,<
    return 0;
}