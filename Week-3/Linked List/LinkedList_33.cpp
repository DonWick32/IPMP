#include <bits/stdc++.h>
#include <cinttypes>

using namespace std;

class Node
{
public:
    int data;
    Node* xnode;
};

Node* Xor(Node* x, Node* y)
{
    return reinterpret_cast<Node*>(reinterpret_cast<uintptr_t>(x) ^ reinterpret_cast<uintptr_t>(y));
}

void insert(Node** head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->xnode = *head;
    if (*head != NULL)
    {
        (*head)->xnode = Xor(temp, (*head)->xnode);
    }
    *head = temp;
}
void printList(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        next = Xor(prev, curr->xnode);
        prev = curr;
        curr = next;
    }
}

int main()
{
    Node *head = NULL;
    insert(&head, 10);
    insert(&head, 100);
    insert(&head, 1000);
    insert(&head, 10000);

    printList(head);

    return (0);
}
