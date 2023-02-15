ListNode* deleteAlternate(ListNode* head, int n) {
        if (head == NULL){
            return head;
        } else if (head->next == NULL){
            return head;
        } else if (head -> next -> next == NULL ){
            head->next = NULL;
            return head;
        } else {
            ListNode* prev = head;
            ListNode* curr = head->next;
            ListNode* next = head->next->next;
            while (next != NULL){
                    prev->next = next;
                    prev = next;
                    curr = prev->next;
                    if (curr != NULL){
                        next = curr->next;
                    } else {
                        break;
                    }
            }
            if (curr != NULL){
                prev->next = NULL;
            }
            return head;
        }
    }