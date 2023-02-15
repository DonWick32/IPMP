void unionIntersectionTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* cpy1 = list1;
        ListNode* cpy2 = list2;
        ListNode* u = NULL;
        ListNode* i = NULL;
        ListNode* cpy_u = NULL;
        ListNode* cpy_i = NULL;
        while (cpy1 != NULL){
            cpy2 = list2;
            while (cpy2 != NULL){
                if (cpy1->val == cpy2->val){
                   if (u == NULL){
                        u = new ListNode;
                        u -> val = cpy1 -> val;
                        u -> next = NULL;
                        cpy_u = u;
                    } else {
                        ListNode* temp = new ListNode;
                        temp -> val = cpy1 -> val;
                        temp -> next = NULL;
                        cpy_u -> next = temp;
                        cpy_u = temp;
                    }
                }
                cpy2 = cpy2 -> next;
            }
            cpy1 = cpy1->next;
        }
        i = list1;
        ListNode* temp2 = list2;
        ListNode* temp1 = list1;
        cpy_i = list1;
        int c = 0;
        if (cpy_i == NULL){
            i = list2;
        } else {
            while (cpy_i->next != NULL){
                cpy_i = cpy_i -> next;
                c ++;
            }
            while (temp2 != NULL){
                int j = 0;
                temp1 = list1;
                for (int k = 0; k < c + 1; k++){
                    if (temp1 != NULL){
                        if (temp1->val != temp2->val){
                            j++;
                        }
                        temp1 = temp1->next;
                    } else {
                        break;
                    }
                }
                if (c + 1 == j){
                    ListNode* temp = new ListNode;
                        temp->val = temp2->val;
                        temp->next = NULL;
                        cpy_i->next = temp;
                        cpy_i = temp;
                }
                temp2 = temp2->next;
            }
        }
        //i -> head of union of the two linked lists
        //u -> head of intersection of the two linked lists
    }