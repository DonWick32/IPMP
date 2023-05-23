#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node* left;
	struct node* right;
};

int sum(struct node *root)
{
	if (root == NULL){
        return 0;
    }
	
	return sum(root->left) + root->data +
		sum(root->right);
}

int isSumTree(struct node* node){
	if (node == NULL || (node->left == NULL && node->right == NULL))
		return true;

    if (node->data == sum(node->left) + sum(node->right)){
        if (isSumTree(node->left) and isSumTree(node->right)){
            return true;
        }
    }

    return false;
}

struct node* newNode(int data)
{
	struct node* node = (struct node*)malloc(
		sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return(node);
}

int main()
{
	struct node *root = newNode(26);
	root->left = newNode(10);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(6);
	root->right->right = newNode(3);
	
	if (isSumTree(root))
		cout << "The given tree is a SumTree ";
	else
		cout << "The given tree is not a SumTree ";

	return 0;
}

