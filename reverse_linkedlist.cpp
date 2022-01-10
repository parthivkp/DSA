#include<bits/stdc++.h> 
using namespace std; 

struct node{
int data;
node *next;
node(int d){
    data=d;
    next=NULL;
}
};
node * p;
void insert(node *head,int data){
    if (head==NULL){
        head=new node(data);
    }
while(head->next!=NULL)
head=head->next;
head->next=new node (data);

}
void display(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
node * reverse(node *head){
    if(head==NULL||head->next==NULL){p=head;return head;}
    node *rhead=reverse(head->next);
    rhead->next=head;
    head->next=NULL;
    return head;
    // node *tail=head->next;
    // tail->next=head;
    // head->next=NULL;
   // return rhead;

  // ---------------
}

node *reverse1(node *curr,node * prev=NULL){
    if(curr==NULL) return prev;
    node *next=curr->next;
    curr->next=prev;
    return (reverse1(next,curr));
}

node * reverseit(node *head){
    node *prev=NULL;
    node * next1=head->next;
    node *cur=head;
    while(next1!=NULL){
        next1=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next1;

    }return prev;
}

int main(){
node *head=new node(5);
insert(head,10);
insert(head,20);
insert(head,90);
node *j=reverse(head);
display(p);
return 0;
}