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

int length(node *head){
    node*temp =head;
    int count=1;
    while(temp->next!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}

node* append(node* &head, int k){
    int l=length(head);
    int count=1;
    node *newHead,*newTail,*tail=head;
    k=k%l;
    while(tail->next!=NULL){
        if(count==(l-k)){
            newTail=tail;
        }
        if(count==(l-k+1)){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next=head;
    return newHead;
}

int length(node *head){
    if(head==NULL)
        return 0;
    int count=1;
    node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}

int intersection(node* &head1, node* &head2){
    int l1=length(head1);
    int l2=length(head2);
    int d=0;
    node* ptr1,*ptr2;
    if(l1-l2>0){
        ptr1=head1;
        ptr2=head2;
        d=l1-l2;
    }else{
        ptr1=hea2;
        ptr2=head1;
        d=l2-l1;
    }
    while(d){
        if(ptr1==NULL)
            return -1;
        ptr1=ptr1->next;
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2)
            return ptr2->data;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    // node* newHead=append(head,3);
    // display(newHead);
    return 0;
}

//CHECK ON PLATFORM