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

void print_k_distance(node *head,int k){
    
    if(head==NULL)
    return;
    if(k==0)
    cout<<head->data<<" ";
    print_k_distance(head->left,k-1);
    print_k_distance(head->right,k-1);
}


void printlvl(node *head){
    if(head==NULL){
        return;
    }
    queue <node *>q;
    q.push(head);
    while(q.empty()==false){
       node * temp=q.front();
       cout<<temp->data<<" ";
       q.pop();
       if(temp->left!=NULL)
       q.push(temp->left);
       if(temp->right!=NULL)
       q.push(temp->right);

    }
}


int size(node *head){
    static int count=0;
     if(head==NULL)
     return 0;
    count++;                     // or  
                                // else{
    size(head->left);            //  return 1+size(head->left)+size(head->right); 
    size(head->right);             //         }
    return count;
    
}
int max_el(node *head){
    if(head==NULL)
    return 0;
    return max(head->data,max(max_el(head->left),max_el(head->right)));
}
void inorder_iterative(node * head){
    stack <node *> g;
    node *cur=head;
    while(cur!=NULL||g.empty()==false){
        while(cur!=NULL){
            g.push(cur);
            cur=cur->left;
        }
         cur=g.top();g.pop();
        cout<<cur->data<<" ";
        cur=cur->right;
    }
}
void preorder_iterative(node * head){
    stack <node *> g;
    node *curr=head;
    g.push(curr);
    while(g.empty()==false){
        node * curr=g.top();
        cout<<curr->data<<" ";g.pop();
        if(curr->right!=NULL)g.push(curr->right);   //stack so right should come first in code ..it will go below left
        if(curr->left!=NULL)g.push(curr->left);
    }
 
       
    
}  

void postOrderIterative(node* root)
{
    if (root == NULL)
        return;
  
    // Create two stacks
    stack<node *> s1, s2;
  
    // push root to first stack
    s1.push(root);
    node* node;
  
    // Run while first stack is not empty
    while (!s1.empty()) {
        // Pop an item from s1 and push it to s2
        node = s1.top();
        s1.pop();
        s2.push(node);
  
        // Push left and right children
        // of removed item to s1
        if (node->left)
            s1.push(node->left);
        if (node->right)
            s1.push(node->right);
    }
  
    // Print all elements of second stack
    while (!s2.empty()) {
        node = s2.top();
        s2.pop();
        cout << node->data << " ";
    }
}




int main() { 
node *head=new node(10);
node *ll =new node (20);
node *rr=new node(30);
node *templ=new node(40);
node *tempr=new node(50);
node *temp1r=new node(60);
node* temp3l=new node(70);
node* temp3r=new node(80);
tempr->left=temp3l;
tempr->right=temp3r;
rr->right=temp1r;
ll->left=templ;
ll->right=tempr;
head->left=ll;
head->right=rr;
printlvl(head);              // print all in the excate order
cout<<endl;
print_k_distance(head,1);    //1= first lvl///0=root level .....all elements in particular lvl
cout<<endl<<"Size of tree is (number of elements) ";
cout<<size(head)<<endl;
cout<<"max element is "<<max_el(head);
cout<<endl<<"inorder traversal iterative method is \n";
inorder_iterative(head);cout<<endl;
cout<<endl<<"preorder traversal iterative method is \n";
preorder_iterative(head);cout<<endl;
    return 0;
}