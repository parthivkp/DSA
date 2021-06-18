#include <bits/stdc++.h>
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

void printlvl(node *head,int k){
    
    if(head==NULL)
    return;
    if(k==0)
    cout<<head->data<<" ";
    printlvl(head->left,k-1);
    printlvl(head->right,k-1);



}


void print(node *head){
    if(head==NULL){
        return;
    }print(head->left);
    cout<<(head->data)<<" ";
    print(head->right);
}

int main(){
node *head=new node(10);
node *ll =new node (5);
node *rr=new node(15);
head->left=ll;
head->right=rr;
printlvl(head,1);

    return 0;
}