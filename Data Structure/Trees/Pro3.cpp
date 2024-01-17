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

bool isBalanced(BinaryTree* root) {
    if (root == nullptr) {
        return true;
    }

    queue<BinaryTree*> q;
    q.push(root);

    while (!q.empty()) {
        BinaryTree* current = q.front();
        q.pop();

        int leftHeight = 0;
        int rightHeight = 0;
        bool leftBalanced = true;
        bool rightBalanced = true;

        if (current->left != nullptr) {
            q.push(current->left);
            leftHeight = 1 + max(leftHeight, leftHeight);
            leftBalanced = isBalanced(current->left);
        }

        if (current->right != nullptr) {
            q.push(current->right);
            rightHeight = 1 + max(rightHeight, rightHeight);
            rightBalanced = isBalanced(current->right);
        }

        if (abs(leftHeight - rightHeight) > 1 || !leftBalanced || !rightBalanced) {
            return false;
        }
    }

    return true;
}


int main(){
	BinaryTree* root = new BinaryTree(40);
	root->left = new BinaryTree(20);
	root->right = new BinaryTree(60);
	root->left->left = new BinaryTree(10);
	root->left->left->left = new BinaryTree(10);
	root->left->left->left->left = new BinaryTree(30);
	cout<<"\n PreOrder : ";
	preOrder(root);
	cout<<"\n PostOrder : ";
	postOrder(root);
	cout<<"\n InOrder : ";
	inOrder(root);
	
	if(isBalanced(root)){
		cout<<"\n\n Tree is balanced";
	}else{
		cout<<"\n\n Tree is not balanced";
	}
	
	return 0;
}