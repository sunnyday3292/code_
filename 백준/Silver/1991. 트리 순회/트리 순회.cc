#include<iostream>
#include<queue>
using namespace std;;

struct Node {
	char data;
	Node* left;
	Node* right;
};

Node* CreateNode(int data) {
	Node* node = new Node();
	node->data = data;
	node->left = node->right = NULL;
	return node;
}

Node* FindNode(Node*root,int data) {
	if (root == NULL) {
		root = CreateNode(data);
		return root;
	}
	else {
		queue < Node*>q;
		q.push(root);
		while (!q.empty()) {
			Node* temp = q.front();
			q.pop();
			if (temp->data == data) return temp;
			else {
				if(temp->left!=NULL){ q.push(temp->left); }
				if (temp->right != NULL) { q.push(temp->right); }
			}
		}
	}
}
void preorder(struct Node* node) {
	if (node == NULL) return;
	cout << node->data;
	preorder(node->left);
	preorder(node->right);
}

void inorder(struct Node* node) {
	if (node == NULL) {
		return;
	}
	inorder(node->left);
	cout << node->data ;
	inorder(node->right);
}

void postorder(struct Node* node) {
	if (node == NULL) {
		return;
	}
	postorder(node->left);
	postorder(node->right);
	cout << node->data ;
}


int main() {
	int N;
	cin >> N;
	char subroot, left, right;
	Node* root= CreateNode('A');
	for (int i = 0; i < N; i++) {
		cin >> subroot >> left >> right;
		Node* sroot = FindNode(root, subroot);
		if (left != '.') {
			Node* sleft = CreateNode(left);
			sroot->left = sleft;
		}
		if (right != '.') {
			Node* sright = CreateNode(right);
			sroot->right = sright;
		}
		
	}
	preorder(root);
	cout << "\n";
	inorder(root);
	cout << "\n";
	postorder(root);
	cout << "\n";
	return 0;
}