#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
	
	Node(int val){
		data = val;
		next = NULL;
	}
};

void insertAtFirst(Node* &ptr, int val){
	Node* temp = new Node(val);
	temp->next = ptr;
	ptr = temp;
}

void print(Node *ptr){
	while(ptr != NULL){
		cout<<ptr->data<<"-->";
		ptr = ptr->next;
	}
}

int main(){
	Node* head = NULL;
	
	insertAtFirst(head, 10);
	print(head);
	cout<<"\n";
	insertAtFirst(head, 5);
	print(head);
	return 0;
}