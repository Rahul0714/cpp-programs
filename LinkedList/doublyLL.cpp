#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertIntoDll(node* &head, int val){
    node* n=new node(val);

    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
    return;
}

void display(node *head){
    if(head==NULL){
        cout<<"Sorry!"<<endl;
        return;
    }
    node *temp=head,*revTemp;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        revTemp=temp;
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    while(revTemp!=NULL){
        cout<<revTemp->data<<"->";
        revTemp=revTemp->prev;
    }
    cout<<"NULL"<<endl;
}

void removeFromDLL(node* &head, int val){
    if(head==NULL){
        cout<<"Empty"<<endl;
        return;
    }
    node* temp=head;
    while(temp->data!=val&&temp!=NULL){
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    temp->next->prev=temp->prev;

    delete(temp);
}

int main()
{
    node* head=NULL;
    insertIntoDll(head,1);
    insertIntoDll(head,2);
    insertIntoDll(head,3);
    insertIntoDll(head,4);
    insertIntoDll(head,5);
    display(head);
    removeFromDLL(head,4);
    display(head);
    return 0;
}