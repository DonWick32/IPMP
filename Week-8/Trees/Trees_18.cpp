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
    int count = 0;

    void calculate(TreeNode* root){
        if (root != NULL){
            calculate(root->left);
            if (root->left == NULL and root->right == NULL){
                count ++:
            }
            calculate(root->right);
        }
    }
    int numOfLeaves(TreeNode* root) {
        calculate(root);
        return count;
    }
};