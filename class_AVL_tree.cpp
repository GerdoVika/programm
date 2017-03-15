#include <iostream>
using namespace std;
struct node{
    int data;
    node*left=NULL;
    node*right=NULL;
    int balance;
};
class AVL_tree{
    node*root;
    public:
AVL_tree(int a){
    root=new node;
    root->balance=0;
    root->data=a;
    root->left=NULL;
    root->right=NULL;
};
void push(int a,node*temp){
    if(temp->right!=NULL ||temp->left!=NULL){
        if(a<temp->data){
            temp->balance++;
            return push(a,temp->left);
        }
        if(a>temp->data){
            temp->balance--;
            return push(a,temp->right);
        }
    }
    else{
        node*f=new node;
        if(a>temp->data)
        f=temp->right;
        else{ f=temp->left;}
        f->data=a;
        f->balance=0;
        f->right=NULL;
        f->left=NULL;
        rebalancing(a);
    }
};
bool check_balance(node*n){
    if(n->balance<=1 && n->balance>-1)
    return true;
    else return false;
};
void rebalancing(int a){
    node*m=root;
    while(m->right->data!=a && m->left->data!=a){
        if(a>m->data)
        m=m->right;
        else m=m->left;
    }
    if(check_balance(m))
    return rebalancing(m->data);
    else{
        if(m->balance<0){
            if(m->right->balance>0)
            br(m);
            else r(m);
        }
        else{
            if(m->left->balance<0)
            bl(m);
            else l(m);
        }
    }
};
void l(node*n){
    node*temp=n;
    n->left->right=temp;
    n=n->left;
};
void r(node*n){
    node*temp=n;
    n->right->left=temp;
    n=n->left;
};
void bl(node*n){
    node*temp=n;
    n->left=temp;
    temp->right->right=n;
    r(temp);
};
void br(node*n){
    node*temp=n;
    n->right=temp;
    temp->left->left=n;
    l(temp);
};
void deltree(node*n){
    if(n==NULL)
    return;
    deltree(n->left);
    deltree(n->right);
    delete n;
};
~AVL_tree(){
    deltree(root);
}
};
int main(){
    AVL_tree A(1);
}