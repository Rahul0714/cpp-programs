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

node* duplicate(node* head){
    node* prev=head;
    node* curr=prev->next;
    while(curr->next!=NULL){
        // cout<<prev->data;
        if(prev->data==curr->data){
            node* t=prev;
            while(t!=NULL && t->data==curr->data){
                // cout<<t->data;
                t=t->next;
            }
            prev->next=t;
        }
        // cout<<prev->data<<" ";
        prev=prev->next;
        curr=curr->next;
    }
    return head;
}

int main()
{
    node* root= new node(1);
    root->next= new node(1);
    root->next->next=new node(2);
    root->next->next->next=new node(3);
    root->next->next->next->next=new node(3);
    root->next->next->next->next->next=new node(3);
    print(root);
    cout<<endl;
    node* head=duplicate(root);
    print(head);
    return 0;
}
