#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

node *reverse(node *&head){
    if(head==NULL || head->next==NULL) return head;
    node* d=NULL;
    node* temp=head;
    node* nextNode=NULL;
    while(temp!=NULL){
        nextNode=temp->next;
        temp->next=d;
        d=temp;
        temp=nextNode;
    }
    return d;
}

void print(node *head){
    while(head==NULL) return;
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    node* root= new node(1);
    root->next= new node(2);
    root->next->next=new node(3);
    root->next->next->next=new node(4);
    root->next->next->next->next=new node(5);
    print(root);
    node* head=reverse(root);
    cout<<endl;
    print(head);
    return 0;
}