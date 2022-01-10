#include<bits/stdc++.h>
using namespace std;

class tree{
    public:
int data;
tree *left;
tree *right;
tree(int d){
    left=right=NULL;
    data=d;
}
tree(){

}

};

void display(tree *node){
    if(node!=NULL){ 
        display(node->left);
        cout<<node->data<<" ";
        display(node->right);
    }
}
tree * insert(tree *node,int d){
    if(node==NULL){ 
        tree *node1=new tree();
        node1->data=d;
        return node1;
    }
    else{cout<<node->data;
        queue<tree*>q;
        q.push(node);
        while(!q.empty()){
            tree *node=q.front();
            q.pop();
            if(node->left==NULL){
                tree *n=new tree();
                node->left=n;
                n->data=d;
                return n;
            }else{
                q.push(node->left);
            }
            if(node->right==NULL){
                tree *n=new tree();
                node->right=n;
                n->data=d;
                return n;
            }else{
                q.push(node->right);
            }

        }return NULL;

    }
}

int main(){
tree *head=new tree(4);
//head=insert(head,4);
insert(head,5);
insert(head,6);
insert(head,7);
//insert(head,6);
display(head);
return 0;
}