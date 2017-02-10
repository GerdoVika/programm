#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
class stack{
    node*head;
    public:
    stack(int a){
        head=new node;
        head->data=a;
        head->next=NULL;
    }
    ~stack(){
        while(head!=NULL){
            node*temp=head;
            head=head->next;
            delete temp;
        }
    };
    void push(int a){
        node*temp=new node;
        temp->next=head;
        temp->data=a;
        head=temp;
    };
    int pop(){
        if (head==NULL) return 0;
        else{
            node*temp=head;
            int a=temp->data;
            head=head->next;
            delete temp;
            return a;
        }
    }
};
int main(){
    stack A(10);
    A.push(7);
    cout<<A.pop();
    return 0;
}