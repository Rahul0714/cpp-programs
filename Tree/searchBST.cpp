#include<iostream>
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

int ceil(node* root, int key){
    int ceil=-1;
    while(root){
        if(root->data==key){
            ceil=root->data;
            return ceil;
        }
        if(root->data<key){
            root=root->right;
        }else{
            ceil=root->data;
            root=root->left;
        }
    }
    return ceil;
}

bool search(node* root, int k){
    node* temp=root;
    while(temp){
        if(temp->data==k)
            return true;
        if(temp->data>k){
            temp=temp->left;
        }
        else if(temp->data<k){
            temp=temp->right;
        }
    }
    return false;
}

int floor(node* root, int key){
    int floor=1000000;
    while(root){
        if(root->data==key){
            floor=root->data;
            return floor;
        }
        if(key<root->data){
            root=root->left;
        }else{
            floor=root->data;
            root=root->right;
        }
    }
    return floor;
}

int main()
{
    struct node* root=new node(8);
    root->left=new node(5);
    root->right=new node(10);
    root->left->left=new node(4);
    root->left->right=new node(6);
    root->right->left=new node(9);
    root->right->right=new node(11);
    cout<<search(root,4)<<endl;
    cout<<ceil(root,7)<<endl;
    cout<<floor(root,9)<<endl;
    return 0;
}