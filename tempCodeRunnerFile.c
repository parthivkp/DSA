#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node *left;
node *right;
node(int d){
    data=d;
    left=NULL;
    right=NULL;
}
};

void insert(node*root,int data){
  if(root==NULL){
      root=new node(data);
  }else{
      queue<node *> q;
      q.push(root);
      while(!q.empty()){
            node * temp=q.front();
            q.pop();
            if(temp->left!=NULL)
            q.push(temp->left);
            else if(temp->right!=NULL)
            q.push(temp->right);
           if(temp->left==NULL){ 
                temp->left=new node(data); return;
            }else if(temp->right==NULL){ 
                temp->right=new node(data);return;
            }
      }
  }
}

void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
 
void inorder1(node *root){
    stack<node*>s;
    s.push(root);
    
    while(!s.empty()){ p:
        root=s.top();
        while(root->left!=NULL){
            s.push(root->left);
            root=root->left;
        }g:
        node *temp=s.top();
        s.pop();
        cout<<temp->data<<" ";
        if(temp->right!=NULL){
        s.push(temp->right);
        }if(temp->right==NULL)
        goto g;
    }
} 

int main(){
    vector<vector<int>>(5,vector<int>);
node *root=NULL;
root=new node(3);
root->left=new node(7);
root->right=new node(18);
root->left->left=new node(66);
insert(root,15);
insert(root,87);
inorder(root);
}