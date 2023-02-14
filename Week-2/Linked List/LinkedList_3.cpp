class Solution {
public:
    ListNode* reverse (ListNode* left, ListNode* curr, ListNode* right){
        if (right == NULL){
            curr->next = left;
            cout << curr->val << " ";
            return curr;
        }
        curr->next = left;
        ListNode* val = reverse(curr, right, right->next);
        cout << curr->val << " ";
        return val;
    }
    ListNode* reverseList(ListNode* head) {
        if (head == NULL or head->next == NULL){
            return head;
        }
        return reverse(NULL, head, head->next);
    }
};