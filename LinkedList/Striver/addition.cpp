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

node* add(node* root1, node* root2){
    int carry=0;
    node *d=new node(-1), *temp;
    temp=d;
    while(root1!=NULL || root2!=NULL || carry!=0){
        int sum=0;
        if(root1!=NULL){
            sum+=root1->data;
            root1=root1->next;
        }
        if(root2!=NULL){
            sum+=root2->data;
            root2=root2->next;
        }
        sum+=carry;
        carry=sum/10;
        d->next=new node(sum%10);
        d=d->next;
        cout<<d->data<<" ";
    }
    return temp->next;
}

int main()
{
    node* root= new node(1);
    root->next= new node(3);
    root->next->next=new node(4);
    root->next->next->next=new node(7);
    root->next->next->next->next=new node(8);

    node* head=new node(2);
    head->next=new node(5);
    head->next->next=new node(6);
    head->next->next->next=new node(9);

    node* ans=add(root, head);
    print(ans);
    return 0;
}