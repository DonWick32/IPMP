class Solution {
public:
    bool removeCycle(ListNode *head) {
        if (head == NULL){
            return head;
        } else if (head->next == NULL){
            return head;
        } else if (head->next == head){
            head->next = NULL;
            return head;
        } else {
            ListNode* cpy = head;
            ListNode* cpy1 = head->next;
            ListNode* cpy2 = head->next->next;
            int c = 0;
            while (cpy2 != NULL && cpy2->next != NULL && cpy1 != cpy2){
                cpy = cpy -> next;
                cpy1 = cpy1 -> next;
                cpy2 = cpy2 -> next->next;
                c ++;
            }
            if (cpy1 == cpy2){
                if (c%2 == 0){
                    cpy1->next = NULL;
                } else {
                    cpy->next = NULL;
                }   
            }
        }
        return head;
    }
};