/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool process(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL){
            return true;
        }
        if (p == NULL && q != NULL){
            return false;
        }
        if (q == NULL && p != NULL){
            return false;
        } else {
            if (p->val == q->val){
                return process(p->left, q->left) && process(p->right, q->right);
            } else {
                return false;
            }
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return process(p, q);
    }
};