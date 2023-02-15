class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL){
            return false;
        } else if (head->next == NULL){
            return false;
        } else if (head->next == head){
            return true;
        } else {
            ListNode* cpy1 = head->next;
            ListNode* cpy2 = head->next->next;
            while (cpy2 != NULL && cpy2->next != NULL && cpy1 != cpy2){
                cpy1 = cpy1 -> next;
                cpy2 = cpy2 -> next->next;
            }
            return cpy1 == cpy2;
        }
    }
};