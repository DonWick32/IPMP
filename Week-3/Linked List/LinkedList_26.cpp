#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
};

void push(Node ** head_ref, int new_data)
{
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void printList(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

void skipMdeleteN(Node *head, int M, int N)
{
    Node* cpy = head;
    vector <Node*> starts;
    vector<Node*> ends;
    int c = 0;
    int s = 0, e = 0;
    if (M == 1){
        int flip = 0;
        while (cpy != NULL){
            if (c >= 0){
                if (c % 2 == 0){
                    cout <<"Start"<< cpy -> data << endl;
                    starts.push_back(cpy);
                    s ++;
                } else {
                    if (c % N == 0 && c != 0){
                        cout <<"End"<< cpy -> data << endl;
                        ends.push_back(cpy);
                        e ++;
                    }
                }
            }
            c ++;
            cpy = cpy -> next;
        }
    } else {
        int m = M;
        int n = M + N - 1;
        while (cpy != NULL){
            if (c == m - 1 && c != 0){
                starts.push_back(cpy);
                s ++;
                cout <<"Start"<< cpy -> data << endl;
                m += m + N;
            }
            if (c == n && c != 0){
                ends.push_back(cpy);
                cout <<"End"<< cpy -> data << endl;
                e ++;
                n += n + M + N;
            }
            cpy = cpy -> next;
            c ++;
        }
    }
    if (e < s){
        while (e != s){
            ends.push_back(NULL);
            e ++;
        }
    }
    for (int i = 0; i < s; i++){
        if (ends[i] == NULL){
            starts[i] -> next = NULL;
        } else {
            starts[i] -> next = ends[i] -> next;
        }
    }
}


int main()
{
	Node* head = NULL;
	int M=3, N=2;
	push(&head, 10);
	push(&head, 9);
	push(&head, 8);
	push(&head, 7);
	push(&head, 6);
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);

	cout << "M = " << M<< " N = " << N << "\nGiven Linked list is :\n";
	printList(head);

	skipMdeleteN(head, M, N);

	cout<<"\nLinked list after deletion is :\n";
	printList(head);

	return 0;
}
