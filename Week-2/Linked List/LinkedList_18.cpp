class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        int n = 0, done = 0;
        ListNode* cpy = head;
        ListNode* tail = head;
        if (head == NULL or head->next == NULL or head->next->next == NULL){
            return head;
        }
        while (tail->next != NULL){
            tail = tail -> next;
            n++;
        }
        n += 1;
        cpy = head;

        for (int i = 0; i < n / 2; i++){
            ListNode* temp = cpy -> next;
            cpy -> next = temp -> next;
            temp->next = NULL;
            tail -> next = temp;
            tail = tail -> next;
            cpy = cpy -> next;
        }
        return head;
    }
};