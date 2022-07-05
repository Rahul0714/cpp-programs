// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node * next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };

// void insertAtTail(node* &head, int val){
    
//     node *n=new node(val);

//     if(head==NULL){
//         head=n;
//         return;
//     }
//     node* temp=head;
//     while(temp->next!=NULL)
//         temp=temp->next;
//     temp->next=n;
// }

// void display(node* head){
//     if(head==NULL){
//         cout<<"Linked List is Empty"<<endl;
//         return;
//     }
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// int main()
// {
//     node *head=NULL;
//     insertAtTail(head,1);
//     insertAtTail(head,2);
//     insertAtTail(head,3);
//     insertAtTail(head,4);
//     insertAtTail(head,5);
//     insertAtTail(head,6);
//     insertAtTail(head,7);
//     display(head);   
//     return 0;
// }














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

void insertAtHead(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;
}

int searchItem(node* head, int key){
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(temp->data==key)
            return count;
        temp=temp->next;
    }
    return -1;
}

int main()
{
    node *head=NULL;
    display(head);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    display(head);
    insertAtHead(head,0);
    display(head);
    cout<<"Found at: "<<searchItem(head,9)<<endl;
    return 0;
}