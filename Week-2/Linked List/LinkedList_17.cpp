class Solution {
public:
    ListNode* sortList(ListNode* head) {
        int zero = 0, one = 0, two = 0;
        ListNode* cpy = head;
        while (cpy != NULL){
            if (cpy->val == 0){
                zero ++;
            } else if (cpy->val == 1) {
                one ++;
            } else {
                two ++;
            }
            cpy = cpy -> next;
        }
        cpy = head;
        for (int i = 0; i < zero; i++){
            cpy->val = 0;
            cpy = cpy -> next;
        }
        for (int i = 0; i < one; i++){
            cpy->val = 1;
            cpy = cpy -> next;
        }
        for (int i = 0; i < two; i++){
            cpy->val = 2;
            cpy = cpy -> next;
        }
        return head;
    }
};