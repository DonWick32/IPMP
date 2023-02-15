ListNode* intersectTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = NULL;
        ListNode* cpy = NULL;
        ListNode* cpy1 = list1;
        ListNode* cpy2 = list2;
        while (cpy1 != NULL and cpy2 != NULL){
            if (cpy1->val == cpy2->val){
                if (ans == NULL){
                    ans = new ListNode;
                    ans -> val = cpy1 -> val;
                    ans -> next = NULL;
                    cpy = ans;
                } else {
                    ListNode* temp = new ListNode;
                    temp -> val = cpy1 -> val;
                    temp -> next = NULL;
                    cpy -> next = temp;
                    cpy = temp;
                }
                cpy1 = cpy1->next;
                cpy2 = cpy2->next;
            } else if (cpy1->val > cpy2->val){
                cpy2 = cpy2->next;
            } else {
                cpy1 = cpy1->next;
            }
        }
        return ans;
}