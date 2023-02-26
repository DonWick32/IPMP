class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL){
            return head;
        }
        Node* ans = new Node(head -> val);
        Node* cpyA = ans;
        Node* cpy = head;
        cpy = cpy -> next;
        while (cpy != NULL){
            Node* temp = new Node(cpy -> val);
            cpyA -> next = temp;
            cpyA = temp;
            cpy = cpy -> next;
        }
        cpy = head;
        cpyA = ans;
        while (cpy != NULL){
            Node* temp = head;
            int n = 0;
            while (temp != cpy -> random){
                temp = temp -> next;
                n ++;
            }
            Node* cpyB = ans;
            while (n --){
                cpyB = cpyB -> next;
            }
            cpyA -> random = cpyB;
            cpy = cpy -> next;
            cpyA = cpyA -> next;
        }
        return ans;
    }
};