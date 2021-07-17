#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node *left;
node *right;
node(int i){
    data=i;
    left=right=NULL;
}
};

void printlvl(node *head){
   // queue< node *> q;
    queue <node *>q;
    q.push(head);
    while(q.empty()==false){
        node *cur=q.front();
        cout<<cur->data<<" ";
        q.pop();
    if(cur->left!=NULL)
    q.push(cur->left);
    if(cur->right!=NULL)
    q.push(cur->right);
    }

}
bool search1(node *head,int key){
 if(head==NULL)
return false;
 if(key==head->data)
return true;
else if(key>head->data){
 return search1(head->right,key);}
else {
return search1(head->left,key);
}

}
node *insert(node *root, int x){
    if(root==NULL)
        return new node(x);
    else if(root->data<x)
        root->right=insert(root->right,x);
    else if(root->data>x)
        root->left=insert(root->left,x);
    return root;
}
int main(){

    node *head=new node(100);
node *ll =new node (50);
node *rr=new node(150);
node *temp1l=new node(25);
node *temp1r=new node(75);
node *temp2l=new node(125);
node *temp2r=new node(175);
ll->left=temp1l;
ll->right=temp1r;
rr->left=temp2l;
rr->right=temp2r;
head->left=ll;
head->right=rr;
printlvl(head);
cout<<search1(head,15);
    return 0;
}