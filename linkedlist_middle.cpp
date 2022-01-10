#include<bits/stdc++.h>
using namespace std;


struct node{
	
node *next;
int data;
node(int d){
		data=d;
		next=NULL;
	}
};
void p(node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}
void  insert(node *head){
int count=0;
node *temp =new node (500);
node *ptr=head;
node *head1=head;
while(head1!=NULL)
{
	count++;
	head1=head1->next;
}
count=count/2;
while(count){
	ptr=head;
	head=head->next;
	count--;
}
temp->next=head;
ptr->next=temp;
}
int main(){
 node* head=new node(7);
 
 node* head1=new node(8);
 head->next=head1;
 node* head2=new node(9);
 head1->next=head2;
 node* head3=new node(10);
 head2->next=head3;
 insert(head);
 p(head);



return 0;

}