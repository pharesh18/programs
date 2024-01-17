#include<iostream>
using namespace std;

class BST{
	public:
		int data;
		BST* left;
		BST* right;
		BST(int val){
			data = val;
			left = NULL;
			right = NULL;
		}
};

BST* insertEle(BST* root, int val){
	if(root == NULL){
		root = new BST(val);
		return root;
	}
	
	if(val < root->data){
		root->left = insertEle(root->left, val);
	}else{
		root->right = insertEle(root->right, val);
	}
	
	return root;
}

void deleteEle(BST* root, int val){
	
}

bool searchEle(BST* root, int val){
	if (root == NULL) {
        return false;
    }

    if (val == root->data) {
        return true;
    } else if (val < root->data) {
        return searchEle(root->left, val);
    } else {
        return searchEle(root->right, val);
    }
}

void preOrder(BST* root){
	if (root != NULL) {
    	cout << root->data << " ";
    	preOrder(root->left);
    	preOrder(root->right);
	}
}

void postOrder(BST* root){
	if(root != NULL){
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data<<" ";
	}
}

void inOrder(BST* root){
	if(root != NULL){
		inOrder(root->left);
		cout<<root->data<<" ";
		inOrder(root->right);
	}
}

int main(){
	BST* root = NULL;
	int choice, val;
	
	do{
		cout<<"\n\n Enter your choice : \n";
		cout<<" 1. Insert Element\n";
		cout<<" 2. Delete Element\n";
		cout<<" 3. Search Element\n";
		cout<<" 4. Display PreOrder\n";
		cout<<" 5. Display PostOrder\n";
		cout<<" 6. Display InOrder\n";
		cout<<" 0. Exit\n\n";
		cout<<" Enter your choice : ";
		cin>>choice;
		
		switch(choice){
			case 1:
				cout<<"\n Enter value : ";
				cin>>val;
				root = insertEle(root, val);
				break;
				
			case 2:
				cout<<"\n Enter the element you want to delete : ";
				cin>>val;
				deleteEle(root, val);
				break;
				
			case 3:
				cout<<"\n Enter the element you want to search : ";
				cin>>val;
				if(searchEle(root, val)){
					cout<<"\n "<<val<<" found in the BST";
				}else{
					cout<<"\n "<<val<<" not found in the BST";
				}
				break;
			
			case 4:
				preOrder(root);
				break;
			
			case 5:
				postOrder(root);
				break;
				
			case 6:
				inOrder(root);
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