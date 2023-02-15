class Solution {
public:
    ListNode* reverse (ListNode* left, ListNode* curr, ListNode* right){
        if (right == NULL){
            curr->next = left;
            return curr;
        }
        curr->next = left;
        ListNode* val = reverse(curr, right, right->next);
        return val;
    }
    ListNode* reverseList(ListNode* head) {
        if (head == NULL or head->next == NULL){
            return head;
        }
        return reverse(NULL, head, head->next);
    }
    bool isPalindrome(ListNode* head) {
        int c = 0;
        ListNode* temp = head;
        while (temp != NULL){
            c ++;
            temp = temp -> next;
        }
        temp = head;
        int j = c % 2 ? c/2 : c/2 - 1;
        for (int i = 0; i < j + 1; i++){
            cout << temp -> val << endl;
            temp = temp -> next;
        }
        temp = reverseList(temp);
        while (head != NULL and temp != NULL){
            cout << head->val << " " << temp->val << endl;
            if (head->val != temp->val){
                return false;
            }
            head = head -> next;
            temp = temp -> next;
        }
        return true;
    }
};