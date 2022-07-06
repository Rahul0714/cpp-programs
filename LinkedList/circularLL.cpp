#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertNode(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        head->next=head;
        return;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    // head=n;
}

node* removeNode(node* &head, int val){
    if(head==NULL){
        cout<<"Common!"<<endl;
        return NULL;
    }
    node* temp=head;
    while(temp->next->data!=val){
        // cout<<temp->data<<endl;
        temp=temp->next;
    }
    node* todelete=temp->next;
    // cout<<temp->data<<endl;
    // cout<<temp->next->data<<endl;
    // cout<<temp->next->next->data<<endl;
    temp->next=temp->next->next;
    if(val==head->data){
        return temp->next;
    }
    delete todelete;
    return head;
}

void display(node* head){
    if(head==NULL){
        cout<<"Empty"<<endl;
        return;
    }
    node* temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}

int main()
{
    node *head=NULL;
    insertNode(head,1);    
    insertNode(head,2);    
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    insertNode(head,6);
    insertNode(head,7);
    display(head);    
    node*newHead=removeNode(head,7);
    display(newHead);    
    return 0;
}