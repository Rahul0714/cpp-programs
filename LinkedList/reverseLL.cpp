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

node* reverse(node* &head){
    if(head==NULL||head->next==NULL){
        cout<<"Common!"<<endl;
        return head;
    }
    node* prev=NULL;
    node* curr=head;
    node* ahead;
    while(curr!=NULL){
        ahead=curr->next;
        curr->next=prev;
        prev=curr;
        curr=ahead;
    }
    return prev;
}

node* reverseRecusrsive(node*&head){
    if(head==NULL||head->next==NULL)
        return head;
    node* newHead=reverseRecusrsive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
}

void insertAtTail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp =head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    if(head==NULL){
        cout<<"Empty!"<<endl;
        return;
    }
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

node* reverseK(node* &head, int k){
    if(head==NULL||head->next==NULL){
        cout<<"Common!"<<endl;
        return head;
    }
    node* prev=NULL;
    node* curr=head;
    node* nxtptr;
    int count=0;
    while(curr!=NULL && count<k){
        nxtptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxtptr;
        count++;
    }
    if(nxtptr!=NULL)
        head->next=reverseK(nxtptr,k);
    return prev;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    node* newHead=reverseK(head,2);
    display(newHead);
    // node* newHead=reverseRecusrsive(head);
    // display(newHead);
    // newHead=reverseRecusrsive(head);
    // display(newHead);
    return 0;
}