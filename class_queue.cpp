#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
class queue{
    node*head;
    public:
    queue(int a){
        head=new node;
        head->data=a;
        head->next=NULL;
    }
    ~queue(){
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
            if(temp->next==NULL){
                int a=temp->data;
                delete temp;
                return a;
            }
            else{
                while(temp->next->next!=NULL){ 
                temp=temp->next;}
                int a=temp->next->data;
                delete temp->next->next;
                temp->next=NULL;
                return a;
            }
        }
    }
};
int main(){
    queue A(10);
    A.push(7);
    cout<<A.pop();
    return 0;
}