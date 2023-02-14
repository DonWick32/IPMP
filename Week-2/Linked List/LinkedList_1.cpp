class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c = 0;
        ListNode* temp = head;
        while (temp != NULL){
            c ++;
            temp = temp -> next;
        }
        temp = head;
        for (int i = 0; i < c - n - 1; i++){
            if (temp != NULL){
                temp = temp -> next;
            }
        }
        if (c == n){
            return head->next;
        } else if (temp->next == NULL){
            return NULL;
        } else {
            temp->next = temp->next->next;
            return head;
        }
    }
};