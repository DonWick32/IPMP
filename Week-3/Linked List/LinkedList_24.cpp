class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* cpy1 = head;
        ListNode* cpy2 = head -> next;
        cpy1->next = cpy2->next;
        cpy2->next = cpy1;
        head = cpy2;
        if (head -> next -> next == NULL || head -> next -> next -> next == NULL){
            return head;
        }
        ListNode* prev = head -> next;
        cpy1 = head -> next -> next;
        cpy2 = cpy1 -> next;
        while (cpy2 != NULL){
            prev -> next = cpy2;
            cpy1 -> next = cpy2 -> next;
            cpy2 -> next = cpy1;
            prev = cpy1;
            if (cpy1 -> next != NULL){
                cpy2 = cpy1 -> next -> next;
            } else {
                break;
            }
            cpy1 = cpy1 -> next;
        }
        return head;
    }
};