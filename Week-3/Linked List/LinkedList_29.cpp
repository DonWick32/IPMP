class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = NULL;
        ListNode* cpy1 = list1;
        ListNode* cpy2 = list2;
        ListNode* cpy = NULL;
        
        while (cpy1 != NULL && cpy2 != NULL){
            int mini = cpy1->val < cpy2->val ? cpy1->val : cpy2->val;
            if (mini == cpy1->val){
                cpy1 = cpy1 -> next;
            } else {
                cpy2 = cpy2 -> next;
            }
            if (cpy == NULL){
                ans = new ListNode;
                ans->val = mini;
                ans->next = NULL;
                cpy = ans;
            } else {
                ListNode* temp = new ListNode;
                temp->val = mini;
                temp->next = NULL;
                cpy->next = temp;
                cpy = temp;
            }
        }

        while (cpy1 != NULL){
            if (cpy == NULL){
                ans = new ListNode;
                ans->val = cpy1 ->val;
                ans->next = NULL;
                cpy = ans;
            } else {
                ListNode* temp = new ListNode;
                temp->val = cpy1 ->val;
                temp->next = NULL;
                cpy->next = temp;
                cpy = temp;
            }
            cpy1 = cpy1 -> next;
        }

        while (cpy2 != NULL){
            if (cpy == NULL){
                ans = new ListNode;
                ans->val = cpy2 ->val;
                ans->next = NULL;
                cpy = ans;
            } else {
                ListNode* temp = new ListNode;
                temp->val = cpy2 ->val;
                temp->next = NULL;
                cpy->next = temp;
                cpy = temp;
            }
            cpy2 = cpy2 -> next;
        }

        return ans;
    }
    
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head -> next == NULL){
            return head;
        }

        ListNode* temp = head;
        int n = 0;
        while (temp != NULL){
            n ++;
            temp = temp -> next;
        } 
        if (n % 2 == 0){
            n = n / 2 - 1;
        } else {
            n = n / 2;
        }
        ListNode* l1 = head;
        ListNode* l2 = head;
        for (int i = 0; i < n; i++){
            l2 = l2 -> next;
        }
        temp = l2 -> next;
        l2->next = NULL;
        l2 = temp;
        l1 = sortList(l1);
        l2 = sortList(l2);
        return mergeTwoLists(l1, l2);
    }
};