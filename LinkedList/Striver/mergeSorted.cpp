#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void print(node *head){
    while(head==NULL){
        cout<<"[]"<<endl;
        return;
    }
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* merge(node* &root1, node* &root2){
    if(!root1) return root2;
    if(!root2) return root1;
    node* d=new node(-1);
    node* temp=d;
    while(root1 && root2){
        if(root1->data<root2->data){
            d->next=root1;
            //cout<<d->data<<" ";
            root1=root1->next;
        }else{
            d->next=root2;
            //cout<<d->data<<" ";
            root2=root2->next;
        }
        d=d->next;
    }
    while(root1){
        d->next=root1;
        root1=root1->next;
        d=d->next;
    }
    while(root2){
        d->next=root2;
        root2=root2->next;
        d=d->next;
    }
    return temp->next;
}

int main()
{
    node* root= new node(1);
    root->next= new node(3);
    root->next->next=new node(4);
    root->next->next->next=new node(7);
    root->next->next->next->next=new node(8);

    node* head=new node(2);
    head->next=new node(5);
    head->next->next=new node(6);
    head->next->next->next=new node(9);

    node* ans=merge(root, head);
    print(ans);
    return 0;
}