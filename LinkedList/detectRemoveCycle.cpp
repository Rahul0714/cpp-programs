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

void insertInto(node* &head, int val){
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
        cout<<"Empty"<<endl;
    }
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void makeCycle(node* &head, int n){
    node* tempNode,*temp=head;
    int count=1;
    while(temp->next!=NULL){
        if(count==n){
            tempNode=temp;
        }
        count++;
        temp=temp->next;
    }
    temp->next=tempNode;
}

bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head){
    node* slow=head;
    node* fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow->next!=fast->next);
    fast=head;
    while(fast->next!=slow->next){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
}

int main()
{
    node* head=NULL;
    insertInto(head,1); 
    insertInto(head,2);
    insertInto(head,3);
    insertInto(head,4);
    insertInto(head,5);  
    display(head);
    cout<<detectCycle(head)<<endl;
    makeCycle(head,3);
    // display(head);    
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    display(head);
    cout<<detectCycle(head)<<endl;

    return 0;
}