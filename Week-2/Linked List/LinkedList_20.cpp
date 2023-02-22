class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        if (head == NULL || head->next == NULL){
            ans.push_back(head);
            return ans;
        } else {
            ListNode* head1 = new ListNode;
            ListNode* head2 = new ListNode;
            head1->val = head->val;
            head1->next = NULL;
            head = head -> next;
            head2->val = head->val;
            head2->next = NULL;
            head = head -> next;
            ListNode* cpy1 = head1;
            ListNode* cpy2 = head2;
            bool s = true;
            while (head != NULL){
                if (s){
                    ListNode* temp = new ListNode;
                    temp->val = head->val;
                    cpy1->next = temp;
                    cpy1 = temp;
                    s = false;
                } else {
                    ListNode* temp = new ListNode;
                    temp->val = head->val;
                    cpy2->next = temp;
                    cpy2 = temp;
                    s = true;
                }
                head = head -> next;
            }
            ans.push_back(head1);
            ans.push_back(head2);
            return ans;
        }
    }
};