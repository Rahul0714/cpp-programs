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

node* remove(node* &head, int len, int k){
    if(head==NULL) return head;
    else if(k==len){
        node* temp=head;
        node* prev=head;
        if(temp->next!=NULL){
            while(temp->next!=NULL){
                prev=temp;
                temp=temp->next;
            }
            prev->next=NULL;
            delete temp;
        }else{
            delete temp;
            return NULL;
        }
    }else if(k==1){
        node* temp=head;
        head=temp->next;
    }else{
        node *temp=head;
        node *prev=head;
        int count=0;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
            if(count==k-1){
                break;
            }
            prev=prev->next;
        }
        prev->next=temp->next;
        delete temp;
    }
    return head;
}
//fast pointer and slow pointer apporach (best)
node* remove(node* head, int k){
    node* d=new node(-1);
    d->next=head;
    node* fast=d;
    node* slow=d;
    int count=0;
    while(count<k){
        count++;
        fast=fast->next;
    }
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;
    return d->next;
}

int main()
{
    node* root= new node(1);
    root->next= new node(2);
    root->next->next=new node(3);
    root->next->next->next=new node(4);
    root->next->next->next->next=new node(5);
    print(root);
    // int len=length(root);
    // cout<<len<<endl;
    int k;
    cin>>k;
    // node* head=remove(root,len,(len-k+1));
    node* head=remove(root,k);
    print(head);
    return 0;
}