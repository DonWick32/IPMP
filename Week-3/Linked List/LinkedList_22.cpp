class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        ListNode* head = NULL;
        ListNode* cpy = NULL;
        int sum = 0, carry = 0;
        while (ptr1 != NULL && ptr2 != NULL){
            if (head == NULL){
                sum = (ptr1->val + ptr2->val) % 10;
                carry = (ptr1->val + ptr2->val) / 10;
                head = new ListNode;
                cpy = head;
                head->val = sum;
                    ListNode* temp = new ListNode;
                    temp->val = carry;
                    temp->next = NULL;
                    head->next = temp;
                    cpy = cpy->next;
            }
            else {
                sum = (ptr1->val + ptr2->val + cpy->val) % 10;
                carry = (ptr1->val + ptr2->val + cpy->val) / 10;
                cpy->val = sum;
                ListNode* temp = new ListNode;
                temp->val = carry;
                temp->next = NULL;
                cpy->next = temp;
                cpy = cpy -> next;
            }

            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        while (ptr1 != NULL){
            sum = (ptr1->val + cpy->val) % 10;
            carry = (ptr1->val + cpy->val) / 10;
            cpy->val = sum;
                ListNode* temp = new ListNode;
                temp->val = carry;
                temp->next = NULL;
                cpy->next = temp;
                cpy = cpy -> next;
            ptr1 = ptr1->next;
        }
        while (ptr2 != NULL){
            sum = (ptr2->val + cpy->val) % 10;
            carry = (ptr2->val + cpy->val) / 10;
            cpy->val = sum;
                ListNode* temp = new ListNode;
                temp->val = carry;
                temp->next = NULL;
                cpy->next = temp;
                cpy = cpy -> next;
            ptr2 = ptr2->next;
        }
        ListNode* ans = NULL;
        ListNode* cpy2 = NULL;
        if (cpy -> val == 0){
            while (head != cpy){
                if (ans == NULL){
                    ListNode* temp = new ListNode;
                    temp->val = head->val;
                    temp->next = NULL;
                    ans = temp;
                    cpy2 = ans;
                    head = head->next;  
                } else {
                    ListNode* temp = new ListNode;
                    temp->val = head->val;
                    temp->next = NULL;
                    head = head->next;
                    cpy2->next = temp;
                    cpy2 = cpy2 -> next;
                }
            }
        } else {
            ans = head;
        }
        return ans;
    }
};  