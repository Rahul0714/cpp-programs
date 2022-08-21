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

node* rotate(node* head,int k){
    if(head==NULL || head->next==NULL) return head;
    node* temp=head,*temp2=head;
    int len=1;
    while(temp2->next!=NULL){
        len++;
        temp2=temp2->next;
    }
    k%=len;
    temp2->next=head;
    for(int i=1;i<(len-k);i++){
        temp=temp->next;
    }
    head=temp->next;
    temp->next=NULL;
    return head;
}

int main()
{
    node* root= new node(1);
    root->next= new node(2);
    root->next->next=new node(3);
    root->next->next->next=new node(4);
    root->next->next->next->next=new node(5);
    // root->next->next->next->next->next=new node(6);
    print(root);
    cout<<endl;
    node* head=rotate(root,1023);
    print(head);
    return 0;
}
