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
        return;
    }
    node* temp=head;
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
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void evenAfterOdd(node* &head){
    if(head==NULL){
        cout<<"No"<<endl;
        return;
    }
    node* even=head->next;
    node* evenPos=head->next;
    node* odd=head;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenPos;
    if(odd->next==NULL)
        even->next=NULL;
}

int main()
{
    node* head=NULL;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    insertNode(head,6);
    insertNode(head,7);
    display(head);
    evenAfterOdd(head);
    display(head);
    return 0;
}