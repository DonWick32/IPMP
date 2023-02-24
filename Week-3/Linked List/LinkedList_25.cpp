class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* cpy = head;
        int n = 0;
        ListNode* f = NULL; 
        while (cpy != NULL){
            if (n == k - 1){
                f = cpy;
            }
            cpy = cpy -> next;
            n ++;
        }
        cpy = head;
        for (int i = 0; i < n - k; i++){
            cpy = cpy -> next;
        }
        int temp = cpy -> val;
        cpy -> val = f -> val;
        f -> val = temp;
        return head;
    }
};