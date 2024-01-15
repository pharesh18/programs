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
	display(head);
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
	display(head);
}

void deleteNode(Node* &head, int pos){
	if(head == NULL){
		cout<<"\n\n List is empty!! \n\n";
		return;
	}
	
	if(pos == 0){
		Node* temp = head;
		head = head->next;
		cout<<"\n\n Node deleted at position "<<pos;
		free(temp);
		return;
	}
	
	int curPos = 0;
	Node* ptr = head;
	Node* curptr = head;
	
	while(curPos < pos - 1 && ptr->next != NULL){
		ptr = ptr->next;
		curPos++;
	}
	
	if(ptr == NULL || ptr->next == NULL){
		cout<<"\n\n Invalid Position!!\n\n";
		return;
	}
	
	Node* temp = ptr->next;
	ptr->next = temp->next;
	cout<<"\n\n Node deleted at position "<<pos;
	free(temp);
}

int main(){
	int choice, val;
	Node* head = NULL;
	do{
		cout<<"\n\n Enter your choice : \n";
		cout<<" 1. Add node at first\n";
		cout<<" 2. Add node at last\n";
		cout<<" 3. Delete node\n";
		cout<<" 4. Display linked list\n";
		cout<<" 0. Exit\n\n";
		cout<<" Enter your choice : ";
		cin>>choice;
		
		switch(choice){
			case 1:
				cout<<"\n Enter value : ";
				cin>>val;
				insertAtFirst(head, val);
				break;
				
			case 2:
				cout<<"\n Enter value: ";
				cin>>val;
				insertAtLast(head, val);
				break;
				
			case 3:
				int pos;
				cout<<"\n Enter the position : ";
				cin>>pos;
				deleteNode(head, pos);
				break;
			
			case 4:
				display(head);
				break;
				
			case 0:
				break;
				
			default:
				cout<<"\n\n Invalid choie, Enter valid choice!";
				break;
		}
	}while(choice != 0);
	return 0;
}