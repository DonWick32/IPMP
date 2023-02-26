class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* l = list1;
        ListNode* r = list1;
        for (int i = 0; i < a - 1; i++){
            l = l -> next;
        }
        for (int j = 0; j < b; j++){
            r = r -> next;
        }
        l -> next = list2;
        while (list2->next != NULL){
            list2 = list2 -> next;
        }
        list2 -> next = r -> next;
        return list1;
    }
};