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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if (root == NULL){
            return ans;
        }
        q.push(root);
        q.push(NULL);
        vector<int> temp;
        bool flag = false;
        while (q.size() > 0){
            TreeNode* n = q.front();
            q.pop();
            if (n != NULL){
                temp.push_back(n->val);
                if (n->left != NULL){
                    q.push(n->left);
                }
                if (n->right != NULL){
                    q.push(n->right);
                }
            } else {
                if (flag){
                    reverse(temp.begin(), temp.end());
                }
                flag = !(flag);
                ans.push_back(temp);
                temp.clear();
                if (q.size() > 0) {
                    q.push(NULL);
                }
            }
        }
        return ans;
    }
};