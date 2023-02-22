#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
};

void push (ListNode* &head, int key)
{
    ListNode* temp = new ListNode;
    temp->val = key;
    temp->next = head;
    head = temp;
}

ListNode* sort (ListNode* &head){
    int n;
    ListNode* cpy = head;
    while (cpy != NULL){
        n ++;
        cpy = cpy -> next;
    }
    ListNode* iNode = head;
    for (int i = 0; i < n; i++){
        ListNode* jNode = head;
        for (int j = 0; j < n - i - 1; j++){
            if (jNode->val > jNode->next->val){
                int temp = jNode->val;
                jNode -> val = jNode -> next -> val;
                jNode -> next -> val = temp;
            }
            jNode = jNode -> next;
        }
        iNode = iNode -> next;
    }
    return head;
}

ListNode* reverseSort (ListNode* &head){
    int n;
    ListNode* cpy = head;
    while (cpy != NULL){
        n ++;
        cpy = cpy -> next;
    }
    ListNode* iNode = head;
    for (int i = 0; i < n; i++){
        ListNode* jNode = head;
        for (int j = 0; j < n - i - 1; j++){
            if (jNode->val < jNode->next->val){
                int temp = jNode->val;
                jNode -> val = jNode -> next -> val;
                jNode -> next -> val = temp;
            }
            jNode = jNode -> next;
        }
        iNode = iNode -> next;
    }
    return head;
}

void print(ListNode* head){
    while (head != NULL){
        cout << head -> val << " ";
        head = head -> next;
    }
    cout << endl;
}

int triplet (ListNode* head1, ListNode* head2, ListNode* head3, int target){
    ListNode* cpy1 = sort(head1);
    ListNode* cpy2 = head2;
    ListNode* cpy3 = reverseSort(head3);
    while (cpy2 != NULL){
        cpy2 = head2;
        cpy3 = head3;
        while (cpy1 != NULL && cpy3 != NULL){
            int sum = cpy1->val + cpy2->val + cpy3->val;
            if (sum > target){
                cpy3 = cpy3 -> next;
            } else if (sum < target){
                cpy1 = cpy1 -> next;
            } else {
                cout << cpy1 -> val << " " << cpy2 -> val << " " << cpy3->val << endl;
                return sum;
            }
        }
        cpy2 = cpy2 -> next;
    }
    return 0;
}

int main(){

    ListNode* headA = NULL;
    ListNode* headB = NULL;
    ListNode* headC = NULL;

    push(headA, 20);
    push(headA, 15);
    push(headA, 10);
    push(headA, 4);

    push (headB, 10);
    push (headB, 9);
    push (headB, 4);
    push (headB, 2);

    push (headC, 1);
    push (headC, 2);
    push (headC, 4);
    push (headC, 8);

    cout << triplet(headA, headB, headC, 25);
    return 0;
}