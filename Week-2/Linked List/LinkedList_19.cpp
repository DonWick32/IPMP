class Solution {
public:
    ListNode* vowelConsonantList(ListNode* head) {

        //a = 97, e = 101, i = 105, o = 111, and u = 117
        int n = 0, done = 0, c = 0;
        ListNode* cpy = head;
        ListNode* tail = head;
        if (head == NULL or head->next == NULL){
            return head;
        }
        while (cpy != NULL){
            int chr = cpy -> val;
            if (chr == 97 or chr == 101 or chr == 105 or chr == 111 or chr == 117){
                n++;
            }
            c ++;
            cpy = cpy -> next;
        }
        while (tail->next != NULL){
            tail = tail -> next;
        }
        int chr = tail -> val;
        if (chr == 97 or chr == 101 or chr == 105 or chr == 111 or chr == 117){
            n++;
        }
        c ++;
        cpy = head;

        if (n == c){
            return head;
        }
        while (cpy -> val == 97 or cpy -> val == 101 or cpy -> val == 105 or cpy -> val == 111 or cpy -> val == 117){
            head = cpy -> next;
            cpy -> next = NULL;
            tail -> next = cpy;
            tail = tail -> next;
            cpy = head;
            n --;
        }
        if (n == 0){
            return head;
        } else {
            while (n - 1 != 0){
                if (cpy -> next -> val == 97 or cpy -> next -> val == 101 or cpy -> next -> val == 105 or cpy -> next -> val == 111 or cpy -> next -> val == 117){
                    ListNode* temp = cpy -> next;
                    cpy -> next = temp -> next;
                    temp -> next = NULL;
                    tail -> next = temp;
                    tail = tail -> next;
                    ListNode* dumb = head;
                    while (dumb != NULL){
                        cout << dumb->val << " ";
                        dumb = dumb -> next;
                    } cout << endl;
                    n --;
                } else {
                    cpy = cpy -> next;
                }
            }
            return head;
        }
    }
};