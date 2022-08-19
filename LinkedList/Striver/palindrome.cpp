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

node* reverse(node* &head){
    if(head==NULL || head->next==NULL) return head;
    node *d=NULL,*temp=head,*nextNode=NULL;
    while(temp!=NULL){
        nextNode=temp->next;
        temp->next=d;
        d=temp;
        temp=nextNode;
    } 
    return d;
}

bool palindrome(node* head){
    if(head==NULL || head->next==NULL) return true;
    node* slow=head;
    node* fast=head;
    node* t=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=reverse(slow->next);
    slow=slow->next;
    print(t);
    cout<<endl;
    print(head);
    cout<<endl;
    while(slow!=NULL){
        cout<<t->data<<" ";
        cout<<slow->data<<" ";
        if(t->data!=slow->data)
            return false;
        slow=slow->next;
        t=t->next;
    }
    return true;
}

int main()
{
    node* root= new node(1);
    root->next= new node(2);
    root->next->next=new node(2);
    // root->next->next->next=new node(1);
    // root->next->next->next->next=new node(1);
    // root->next->next->next->next->next=new node(1);
    print(root);
    cout<<endl;
    bool ans=palindrome(root);
    // print(root);
    ans==true?cout<<"Yes"<<endl:cout<<"No"<<endl;
    return 0;
}