// CPP program to Delete a Tree
#include <bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node* left;
	node* right;
};

node* newNode(int data)
{
	node* Node = new node();

	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;
	return(Node);
}

void deleteTree(node* node)
{
	if (node == NULL) return;

	deleteTree(node->left);
	deleteTree(node->right);

	cout << "Deleting node: " << node->data << endl;
	delete node;
}

int main()
{
	node *root = newNode(1);
	root->left	 = newNode(2);
	root->right	 = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	deleteTree(root);

    root = NULL;

	cout << "Tree deleted ";
	return 0;
}