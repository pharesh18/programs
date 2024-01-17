#include<iostream>
#include<queue>
using namespace std;

class BinaryTree{
	public:
		int data;
		BinaryTree* left;
		BinaryTree* right;
		BinaryTree(int val){
			data = val;
			left = NULL;
			right = NULL;
		}
};

void preOrder(BinaryTree* root){
	if (root != NULL) {
    	cout << root->data << " ";
    	preOrder(root->left);
    	preOrder(root->right);
	}
}

void postOrder(BinaryTree* root){
	if(root != NULL){
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data<<" ";
	}
}

void inOrder(BinaryTree* root){
	if(root != NULL){
		inOrder(root->left);
		cout<<root->data<<" ";
		inOrder(root->right);
	}
}

int getHeight(BinaryTree* root) {
    if (root == NULL) {
        return 0;
    }

    queue<BinaryTree*> q;
    q.push(root);

    int height = 0;

    while (!q.empty()) {
        int levelSize = q.size();

        for (int i = 0; i < levelSize; i++) {
            BinaryTree* current = q.front();
            q.pop();

            if (current->left != NULL) {
                q.push(current->left);
            }
            if (current->right != NULL) {
                q.push(current->right);
            }
        }

        height++;
    }

    return height;
}

int main(){
	BinaryTree* root = new BinaryTree(40);
	root->left = new BinaryTree(20);
	root->right = new BinaryTree(60);
	root->left->left = new BinaryTree(10);
	root->left->right = new BinaryTree(30);
	root->right->left = new BinaryTree(50);
	root->right->right = new BinaryTree(70);
	//root->right->right->left = new BinaryTree(80);
	
	cout<<"\n PreOrder : ";
	preOrder(root);
	cout<<"\n PostOrder : ";
	postOrder(root);
	cout<<"\n InOrder : ";
	inOrder(root);
	
	cout<<"\n\n Height of Tree is : "<<getHeight(root);
	return 0;
}