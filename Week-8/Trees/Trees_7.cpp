// C++ program to populate inorder
// traversal of all nodes
#include <bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;
	node* next;
};

node* ptr = NULL;

node* newnode(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;
	Node->next = NULL;

	return (Node);
}

void populate (node* root){
    if (root != NULL){
        populate(root->right);
        root->next = ptr;
        ptr = root;
        populate(root->left);
    }
}

void print (node* root){
    if (root != NULL){
        print(root->left);
        if (root->next != NULL){
            cout << root->data << " -> " << root->next->data << endl;
        } else {
            cout << root->data << " -> " << -1 << endl;
        }
        print(root->right);
    }
}

int main()
{
	node* root = newnode(10);
	root->left = newnode(8);
	root->right = newnode(12);
	root->left->left = newnode(3);
    populate(root);
    print(root);
	return 0;
}