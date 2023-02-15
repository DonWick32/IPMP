class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* cpy = head;
        int c = 0;
        while (cpy -> next){
            cpy = cpy -> next;
            c ++;
        }
        int j = c % 2 == 0 ? c/2 : c/2 + 1;
        for (int i = 0; i < j; i++){
            head = head -> next;
        }
        return head;
    }
};