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
    int c = 0;
    void repeat(TreeNode* root){
        if (root != NULL){
            repeat(root->left);
            c ++;
            repeat(root->right);
        }
    }
    int countNodes(TreeNode* root) {
        repeat(root);
        return c;
    }
};