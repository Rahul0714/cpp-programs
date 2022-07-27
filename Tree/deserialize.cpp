#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* deserialize(string data){
    if(data.size()==0) return NULL;
    stringstream s(data);
    string str;
    getline(s,str,',');
    node* root=new node(stoi(str));
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        getline(s,str,',');
        if(str=="#"){
            temp->left=NULL;
        }else{
            temp->left=new node(stoi(str));
            q.push(temp->left);
        }
        getline(s,str,',');
        if(str=="#"){
            temp->right=NULL;
        }else{
            temp->right=new node(stoi(str));
            q.push(temp->right);
        }
    }
    return root;
}

void disp(node* temp){
    if(!temp) return;
    disp(temp->left);
    cout<<temp->data<<" ";
    disp(temp->right);
}

int main()
{
    struct node* root;
    string tree="1,2,3,#,#,4,5,#,#,#,#,";
    root=deserialize(tree);
    disp(root);
    return 0;
}