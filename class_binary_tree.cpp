#include <iostream>
#include <queue>
using namespace std;
struct node{
    int data;
    node*left=NULL;
    node*right=NULL;
};
class binary_tree{
    node*root;
    public:
    binary_tree(int a){
        root=new node;
        root->data=a;
        root->left=NULL;
        root->right=NULL;
    };
    ~binary_tree(){
        del_tree(*root);
    };
    void del_tree(node*n){
        if(n==NULL) return;
        del_tree(n->left);
        del_tree(n->right);
        delete n;
    };
    void insert(int a,node*n){
        if(n==NULL){
            node*temp=new node;
            temp=n;
            temp->data=a;
            temp->left=NULL;
            temp->right=NULL;
        }
        if(n->left==NULL){
            node*temp=new node;
            temp=n->left;
            temp->data=a;
            temp->left=NULL;
            temp->right=NULL;
        }
        if(n->right==NULL){
            node*temp=new node;
            temp=n->right;
            temp->data=a;
            temp->right=NULL;
            temp->left=NULL;
        }
        if(n->left->left!=NULL){
            insert(a,n->right);
        }
        else{
            insert(a,n->left);
        }
    };
    bool DFS(int a,node*n){
        if(n==NULL) return false;
        if(n->data==a) return true;
        if(DFS(a,n->left)) return true;
        if(DFS(a,n->right))return true;
        return false;
    };
    bool BFS(int a){
        queue <node*>A;
        A.push(root);
        while (!A.empty()){
            node*temp=A.pop();
            if(temp->data==a) return true;
            if(temp->left!=NULL)
                A.push(temp->left);
            if(temp->right!=NULL)
                A.push(temp->right);
        }
        return false;
    }
};
int main(){
    node c;
    binary_tree b(1);
    b.insert(2,*root);
    b.insert(3,*root);
    if(b.DFS(3))cout<<1;
    else cout<<0;
    if(b.BFS(2));cout<<1;
    else cout<<0;
    return 0;
}

            