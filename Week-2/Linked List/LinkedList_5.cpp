class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node->next;
        while (temp->next != NULL){
            node->val = temp->val;
            node = node->next;
            temp = temp->next;
        }
        node->val = temp->val;
        node->next = NULL;
    }
};