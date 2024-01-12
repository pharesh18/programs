#include<iostream>
using namespace std;

class Node{
	public:
		int val;
		Node *next;
		
		Node(int data){
			val = data;
			next = NULL;
		}
};

void insertAtFirst(Node* &head, int val){
	Node* new_node = new Node(val);
	new_node->next = head;
	head = new_node;
};

void insertAtLast(Node* &head, int val){
	Node* new_node = new Node(val);
	
	Node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = new_node;
}

void display(Node* head){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->val<<"-->";
		temp = temp->next;
	}
}

int main(){
	Node* head = NULL;
	insertAtFirst(head, 2);
	display(head);
	cout<<"\n";
	insertAtFirst(head, 3);
	display(head);
	cout<<"\n";
	insertAtLast(head, 1);
	display(head);
}