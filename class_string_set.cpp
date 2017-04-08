#include <iostream>
#include <string>
using namespace std;
#define RAD 0
#define BLACK 1
struct node{
    string data;
    bool color;
    node*right;
    node*left;
    node*parent;
};
typedef class rbtree{
    node*root;
    int size;
    public:
    rbtree(){
        root=new node;
        root->color=BLACK;
        root->parent=NULL;
        root->right=NULL;
        root->left=NULL;
    };
    ~rbtree(){
        del_tree(root);
    };
    void push(string a,node*temp){
        size++;
        if(temp->right!=NULL ||temp->left!=NULL){
            if(a<(temp->data))
            return push(a,temp->left);
            if(a>(temp->data))
            return push(a,temp->right);
        }
        else{
            node*f=new node;
            if(a>(temp->data))
            f=temp->right;
            else{ f=temp->left;}
            f->data=a;
            f->right=NULL;
            f->left=NULL;
            f->parent=temp;
            f->color=RAD;
            if (f->parent->color==RAD)
            fixup(f);
        }
    };
    void del(string a){
        size--;
        node*temp=root;
        while(a!=temp->data){
            if (temp==NULL)
            return;
            if(a<(temp->data))
            temp=temp->left;
            if(a>(temp->data))
            temp=temp->right;
        }
        temp->left=temp->parent->left;
        temp->left->parent=temp->parent;
        node*k=temp->left->right;
        temp->left->right=temp->right;
        temp->left->right->parent=temp->right->parent;
        node*m=temp;
        while(m->left!=NULL)
        m=m_left;
        m->left=k;
        m->left->parent=k->parent;
        delete temp;
    };
        
            
        
    void fixup(node*a){
        if ((a->data)<(a->parent->parent->data)){
            if (a->parent->parent->right==RAD){
                a->parent->color=BLACK;
                a->parent->parent->color=RAD;
                a->parent->parent->right->color=BLACK;
                if (a->parent->parent->parent==NULL)
                a->parent->parent->color=BLACK;
                if(a->parent->parent->parent->color==RAD)
                fixup(a->parent->parent);
            }
            else{
                if ((a->data)>(a->parent->data))
                {left_r(a);}
                a->parent->color=BLACK;
                a->parent->parent->color=RAD;
                right_r(a->parent);
            }
        }
        else{
            if (a->parent->parent->left==RAD){
                a->parent->color=BLACK;
                a->parent->parent->color=RAD;
                a->parent->parent->left->color=BLACK;
                if (a->parent->parent->parent==NULL)
                a->parent->parent->color=BLACK;
                if(a->parent->parent->parent->color==RAD)
                fixup(a->parent->parent);
            }
            else{
                if ((a->data)<(a->parent->data))
                {right_r(a);}
                a->parent->color=BLACK;
                a->parent->parent->color=RAD;
                left_r(a->parent);
            }
        }
    };
    void right_r(node*a){
        node*temp=a->parent;
        a->parent=a->parent->parent;
        a->right=temp;
        temp->left=NULL;
    };
    void left_r(node*a){
        node*temp=a->parent;
        a->parent=a->parent->parent;
        a->left=temp;
        temp->right=NULL;
    };
    bool dfs(string a,node*n){
        if(n==NULL)
        return false;
        if(n->data==a)
        return true;
        if(dfs (a,n->left))
        return true;
        if (dfs(a,n->right))
        return true;
        return false;
    };
    void del_tree(node*a){
        if (a==NULL)
        return;
        del_tree(a->left);
        del_tree(a->right);
        delete a;
    };
    void print(node*a){
        if (a==NULL)
        return;
        cout<<a->data;
        print (a->left);
        print (a->right);
    };
    string get(node*a){
        get(a->left);
        get(a->right);
        return a;
        del(a);
    };
    node*get_root(){
        return root;
    };
    int get_size(){
        return size;
    };
};
class string_set{
    class rbtree A;
    public:
    string_set(string a){
    };
    ~string_set(){
        A.del_tree(A.get_root());
    };
    void print_set(){
        A.print(A.get_root());
    };
    void string_set operator = (string_set a,string_set b){
        swap(a,b);
        
    };
    void push_el(string a){
        A.push(a,A.get_root());
    };
    bool check_el(string a){
        if (A.dfs(a))
        return 1;
        else return 0;
    };
    void del_el(string a){
        A.del(a);
    };
    int size_set(){
        return A.get_size();
    };
    bool check(){
        if (A.get_size()!=0)
        return 1;
        else return 0;
    };
    void summ (string_set b, string_set a){
        node*n=a.A.get_root();
        if (n==NULL || b.A.get_root()==0)
        return;
        else{ 
            while (a.A.get(n)!=NULL){
                if(!b.A.dfs(a.A.get(n)))
                b.A.push(a.A.get(n));
            }
            delete a;
        }
        
    };
    void multiply (string_set a, string_set b){
        node*n=a.A.get_root();
        if (n==NULL || b.A.get_root()==0)
        return;
        else{
            while (a.A.get()!=NULL){
                if(!b.A.dfs(a.A.get(n))
                b.A.del(a.A.get(n));
            }
            delete a;
        }
    };
};
int main(){
    