class Solution {
public:
        ListNode* reverseList(ListNode* head, int k) {
                if (head == NULL or head->next == NULL){
                    return head;
                } else {
                    ListNode* left = NULL; 
                    ListNode* curr = head; 
                    ListNode* right = head->next;
                    while (--k){
                        curr->next = left;
                        left = curr;
                        curr = right;
                        right = right->next;
                    }
                    curr->next = left;
                    head->next = right;
                    return curr;
                }
            }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cpy = head;
        ListNode* temp = NULL;
        int n = 0, done = 0;
        while (cpy != NULL){
            cpy = cpy -> next;
            n ++;
        }
        head = reverseList(head, k);
        cpy = head;
        for (int i = 0; i < k - 1; i++){
            cpy = cpy -> next;
        }
        done += k;
        while (n - done >= k){
            cpy->next = reverseList(cpy->next, k);
            for (int i = 0; i < k; i++){
                cpy = cpy -> next;
            } cout << endl;
            done += k;
        }
        return head;
    }
};