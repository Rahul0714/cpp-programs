#include<iostream>
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

bool sameOrNot(node* root1, node* root2){
    if(root1==NULL || root2==NULL) return root1==root2;
    return root1->data==root2->data 
    && sameOrNot(root1->left,root2->left) 
    && sameOrNot(root1->right,root2->right);
}

int main()
{   
    node* root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(3);
    node* root2=new node(1);
    root2->left=new node(2);
    root2->right=new node(3);
    cout<<sameOrNot(root1,root2)<<endl;
    return 0;
}