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

node* merge(node* &head1, node* &head2){
    if(head1==NULL||head2==NULL){
        cout<<"Common!"<<endl;
        return NULL;
    }
    node*temp1=head1;
    node* temp2=head2;
    node* temp=new node(-1);
    node* dummy=temp;

    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->data<=temp2->data){
            dummy->next=temp1;
            temp1=temp1->next;
        }else{
            dummy->next=temp2;
            temp2=temp2->next;
        }
        dummy=dummy->next;
    }
    while(temp1!=NULL){
        dummy->next=temp1;
        dummy=dummy->next;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        dummy->next=temp2;
        dummy=dummy->next;
        temp2=temp2->next;
    }
    return temp->next;
}

node* recursiveMerge(node* &head1, node* &head2){
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
    node *result;
    if(head1->data<=head2->data){
        result=head1;
        result->next=recursiveMerge(head1->next,head2);
    }else{
        result=head2;
        result->next=recursiveMerge(head1,head2->next);
    }
    return result;
}

int main()
{
    node *head1=NULL;
    node *head2=NULL;
    insertAtTail(head1,1);
    insertAtTail(head2,2);
    insertAtTail(head1,3);
    insertAtTail(head2,4);
    insertAtTail(head1,5);
    insertAtTail(head2,6);
    insertAtTail(head1,7);
    display(head1);
    display(head2);
    // node* newHead=merge(head1,head2);
    node* newHead=recursiveMerge(head1,head2);
    display(newHead);
    return 0;
}