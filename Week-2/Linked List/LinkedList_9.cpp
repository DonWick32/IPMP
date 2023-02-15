class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* end1 = headA;
        ListNode* end2 = headB;
        unordered_map <ListNode*, int> m;
        while (end1 != NULL){
            m[end1] = end1->val;
            end1 = end1 -> next;
        }
        while (end2 != NULL){
            if (m.count(end2) > 0){
                return end2;
            } else {
                end2 = end2 -> next;
            }
        }
        return NULL;
    }
};