class Solution {
public:
    Node* flatten(Node* head) {
        if (head == NULL){
            return head;
        }
        if (head -> next == NULL){
            if (head -> child == NULL){
                return head;
            } else {
                head->next = head->child;
                head->next->prev = head;
                head->next = NULL;
            }
        }
        if (head->child != NULL){
            Node* temp = head->next;
            head->next = head->child;
            head->child->prev = head;
            head->child = NULL;
            Node* cpy = head;
            while (cpy->next != NULL){
                cpy = cpy -> next;
            }
            cpy -> next = temp;
            if (temp != NULL){
                temp -> prev = cpy;
            }
        }
        flatten(head->next);
        return head;
    }
};