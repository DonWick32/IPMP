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
    int widthOfBinaryTree(TreeNode* root) {
        if (root == NULL){
            return 0;
        }

        int ans = 1;
        queue <pair<TreeNode*, int>> q;

        q.push({root, 0});

        while (q.size() != 0){

            int s = q.size();
            int l = q.front().second;
            int r = q.back().second;

            ans = max (ans, r - l + 1);

            for (int i = 0; i < s; ++i){
                auto f = q.front();

                int ind = f.second - l;

                q.pop();

                if (f.first->left != NULL){
                    q.push({
                        f.first->left,
                        (long long) 2 * ind + 1
                    });
                }
                if (f.first->right != NULL){
                    q.push({
                        f.first->right,
                        (long long) 2 * ind + 2
                    });
                }
            }
        }

        return ans;
    }
};