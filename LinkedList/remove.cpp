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

void removeFromEnd(node* &head){
    if(head==NULL){
        cout<<"Empty!"<<endl;
        return;
    }
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
}

void insertAtTail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    if(head->next==NULL){
        delete head;
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

void removeHead(node* &head){
    if(head==NULL){
        cout<<"Empty!"<<endl;
        return;
    }
    node* toDelete=head;
    head=head->next;
    delete toDelete;
}

void removeKey(node* &head, int key){
    if(head==NULL){
        cout<<"Empty!"<<endl;
        return;
    }
    node* temp=head;
    while(temp->next->data!=key){
        temp=temp->next;
    }
    node* toDelete=temp->next;
    temp->next=temp->next->next;
    delete toDelete;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    // removeFromEnd(head);
    // display(head);
    // removeHead(head);
    // display(head);
    removeKey(head,3);
    display(head);
    return 0;
}