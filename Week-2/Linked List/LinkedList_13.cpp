class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* cpy = head;
        ListNode* temp = NULL;
        int n = 0;
        while (cpy != NULL){
            cpy = cpy -> next;
            n ++;
        }
        if (n == 0 || k == 0){
            return head;
        }
        cpy = head;
        k = k % n;
            for (int i = 0; i < n - k - 1; i++){
                cpy = cpy -> next;
            }
            temp = cpy->next;
            cpy->next = NULL;
            cpy = temp;
            if (temp != NULL){
                while (temp->next != NULL){
                    temp = temp -> next;
                }
                temp->next = head;
                head = cpy;
            }
            return head;
        return head;
    }
};