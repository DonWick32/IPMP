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

    int maxDepth(TreeNode* root) {
        if (root == NULL){
            return 0;
        } else {
            long long l = maxDepth(root->left);
            long long r = maxDepth(root->right);
            if (l > r){
                return l + 1;
            } else {
                return r + 1;
            }
        }
    }

    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        q.push(root);
        q.push(NULL);
        vector<int> temp;
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
                ans.push_back(temp);
                temp.clear();
                if (q.size() > 0) {
                    q.push(NULL);
                }
            }
        }

        int height = maxDepth(root);

        if (ans[ans.size() - 1].size() == (pow(2, height) - 1)){
            return true;
        } else {
            return false;
        }

    }
};