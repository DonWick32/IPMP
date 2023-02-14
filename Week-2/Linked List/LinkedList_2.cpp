class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL or head->next == NULL){
            return head;
        } else {
            ListNode* left = NULL; 
            ListNode* curr = head; 
            ListNode* right = head->next;
            while (right != NULL){

                curr->next = left;
                left = curr;
                curr = right;
                right = right->next;
            }
            curr->next = left;
            return curr;
        }
    }
};