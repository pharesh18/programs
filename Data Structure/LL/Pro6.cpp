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

void display(Node* &head){
	if(head == NULL){
		cout<<"\n\n List is empty\n\n";
		return;
	}
	
	Node* ptr = head;
	while(ptr != NULL){
		cout<<" "<<ptr->data<<"-->";
		ptr = ptr->next;
	}
}

void insertAtFirst(Node* &head, int val){
	Node* ptr = new Node(val);
	ptr->next = head;
	head = ptr;
	//display(head);
}


void insertAtLast(Node* &head, int val){
	if(head == NULL){
		insertAtFirst(head, val);
		return;
	}
	
	Node* ptr = new Node(val);
	Node* start = head;
	while(start->next != NULL){
		start = start->next;
	}
	start->next = ptr;
	//display(head);
}

void removeDuplicates(Node* &head){
	if(head == NULL){
		cout<<"\n\n List is empty!! \n\n";
		return;
	}
	
	if(head->next == NULL){
		return;
	}
	
	int arr[10];
	int top = -1;
	int i;
	bool flag = false;

	Node* ptr = head;
	Node* cur = head;
	
	while(ptr->next != NULL){
		flag = false;
		for(i=0; i<=top; i++){
			if(ptr->data == arr[i]){
				Node* temp = ptr;
				cur->next = ptr->next;
				ptr = cur->next;
				free(temp);
				flag = true;
			}
		}
		
		if(!flag){
			top++;
			arr[top] =  ptr->data;
			cur = ptr;
			ptr = ptr->next;
		}
	}
	
	for(i=0; i<=top; i++){
		if(ptr->data == arr[i]){
			Node* temp = ptr;
			cur->next = ptr->next;
			free(temp);
		}
	}
}

int main(){
	int choice, val;
	Node* head = NULL;
	insertAtLast(head, 10);
	insertAtLast(head, 20);
	insertAtLast(head, 40);
	insertAtLast(head, 40);
	insertAtLast(head, 30);
	insertAtLast(head, 20);
	insertAtLast(head, 20);
	insertAtLast(head, 10);
	insertAtLast(head, 40);
	insertAtLast(head, 30);
	insertAtLast(head, 20);
	insertAtLast(head, 20);
	insertAtLast(head, 10);
	insertAtLast(head, 10);
	
	display(head);
	cout<<"\n\n";
	
	removeDuplicates(head);
	display(head);
	return 0;
}