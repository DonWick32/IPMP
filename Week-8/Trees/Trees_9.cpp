/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        vector<vector<Node*>> ans;
        if (root == NULL){
            return root;
        }
        q.push(root);
        q.push(NULL);
        vector<Node*> temp;
        while (q.size() > 0){
            Node* n = q.front();
            q.pop();
            if (n != NULL){
                temp.push_back(n);
                if (n->left != NULL){
                    q.push(n->left);
                }
                if (n->right != NULL){
                    q.push(n->right);
                }
            } else {
                ans.push_back(temp);
                temp.clear();
                if (q.size() > 0) {
                    q.push(NULL);
                }
            }
        }
        for (int i = 0; i < ans.size(); i++){
            for (int j = 0; j < ans[i].size() - 1; j++){
                ans[i][j]->next = ans[i][j+1];
            }
            ans[i][ans[i].size() - 1] -> next = NULL;
        }
        return root;
    }
};