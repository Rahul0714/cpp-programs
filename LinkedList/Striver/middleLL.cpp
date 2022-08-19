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

int length(node *head){
    int count=0;
    if(head==NULL) count;
    node *temp=head;
    while(temp!=NULL){
        // cout<<temp->data<<" ";
        count++;
        temp=temp->next;
    }
    return count;
}

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

node* middle(node* head, int k){
    if(head==NULL || head->next==NULL) return head;
    node* temp=head;
    int count=1;
    while(count!=k){
        count++;
        temp=temp->next;
    }
    return temp;
}

node* middle1(node* head){
    node* fast=head;
    node* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next; 
        fast=fast->next->next;
    }
    return slow;
}

int main()
{
    node* root= new node(1);
    // root->next= new node(2);
    // root->next->next=new node(3);
    // root->next->next->next=new node(4);
    // root->next->next->next->next=new node(5);
    print(root);
    // int len=length(root);
    // node*mid=middle(root,(len/2)+1);
    node*mid=middle1(root);
    cout<<endl<<mid->data<<endl;
    return 0;
}