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

node* swap(node* head){
    node *prev=head, *curr=prev->next;
    node *temp=curr;
    while(curr->next!=NULL){
        // cout<<prev->data;
        prev->next=curr->next;
        curr->next=prev;
        prev=prev->next;
        curr=prev->next;
    }
    return temp;
}

int main()
{
    node* root= new node(1);
    root->next= new node(2);
    root->next->next=new node(3);
    root->next->next->next=new node(4);
    root->next->next->next->next=new node(5);
    root->next->next->next->next->next=new node(6);
    print(root);
    cout<<endl;
    node* head=swap(root);
    print(head);
    return 0;
}

//after to ek