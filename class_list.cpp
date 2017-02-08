#include <iostream>
using namespace std;
struct node {
	int data;
	node*next;
};

class list {

	node* head;

public:

	list(int a) {
		head = new node; 
		head->data = a;
		head->next = NULL;
	};

	~list() {
		while (head != NULL) {
			node* temp = head; 
			head = head->next;
			delete temp;
		}
	};

	void push_back(int a) {
		node* temp = head; 
		while (temp->next != NULL) { 
			temp = temp->next;
		}
		node *A = new node;
		A->data = a;
		A->next = NULL;
		temp->next = A;
	};

	void push_data(int a, int d) { 
		node* temp = head;
		while (temp->data != d) {
			temp = temp->next;
		}
		node* temp_1 = new node;
		temp_1->next = temp->next;
		temp_1->data = a;
		temp->next = temp_1;
	};

	void push_head(int a) { 
		node* temp = new node;
		temp->next = head;
		temp->data = a;
		head = temp;
	};

	int get(int i) { 
		node *temp = head;
		for (int j = 0; j < i; j++) {
			temp = temp->next;
		}
		return temp->data;
	};

	int size() { 
		node* temp = head;
		int i = 0;
		while (temp->next != NULL) { 
			i++;
			temp = temp->next;
		}
		return i + 1;
	};

	int del(int i) { 
		if (head == NULL) return 0;
		else {
			node* temp = head;
			for (int j = 0; j < i - 1; j++) {
				temp = temp->next;
			}
			int a = temp->next->data;
			node *temp2 = temp->next;
			temp->next = temp->next->next;
			delete temp2;
			return a;
		}
	};

	int del_head() { 
		if (head == NULL) return 0;
		else {
			node*temp = head;
			int a = temp->data;
			head = head->next;
			delete temp;
			return a;
		}
	};

	int find(int a) { 
		node* temp = head;
		int i = 0;
		while (temp->next != NULL) {
			if (temp->data == a) { 
				return i; 
			}
			else {
				i++;
				temp = temp->next;
			}
		}
		 return -1;
	}
};
int main(){
    list A(14);
    for(int i=10;i<=1;i--)
    A.push_head(i);
    A.push_back(13);
    A.push_data(10,11);
    A.del(5);
    A.find(9);
    A.del_head();
    for(int i=0; i<A.size();i++)
        cout<<A.get(i)<<" ";
    return 0;
}
