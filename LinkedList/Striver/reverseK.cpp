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

int count(node* head){
    if(!head) return 0;
    int len=1;
    while(head->next!=NULL){
        len++;
        head=head->next;
    }
    return len;
}

node* reverseK(node* head, int k){
    int len=count(head);
    if(head==NULL || k==1) return head;
    node* dummy=new node(-1);
    dummy->next=head;
    node* nextNode=dummy, *temp=dummy, *prev=dummy;
    while(len>=k){
        temp=prev->next;
        nextNode=temp->next;
        for(int i=1;i<k;i++){
            temp->next=nextNode->next;
            nextNode->next=prev->next;
            prev->next=nextNode;
            nextNode=temp->next;
        }
        prev=temp;
        len-=k;
    }
    return head;
}

int main()
{
    node* root= new node(1);
    root->next= new node(2);
    root->next->next=new node(3);
    root->next->next->next=new node(4);
    root->next->next->next->next=new node(5);
    root->next->next->next->next->next=new node(6);
    print(root);
    cout<<endl;
    node *head=reverseK(root,3);
    print(root);
    cout<<endl;
    return 0;
}

//Not Working...