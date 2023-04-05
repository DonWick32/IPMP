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

        for (int i = 0; i < ans.size(); i++){
            int num = ans[i][0];
            if (i % 2 == 0){
                if (num % 2 == 0){
                    return false;
                }
            } else {
                cout << num << endl;
                if (num % 2 == 1){
                    return false;
                }
            }
            for (int j = 1; j < ans[i].size(); j++){
                if (i % 2 == 0){
                    if (ans[i][j] % 2 == 0){
                        return false;
                    } else {
                        if (ans[i][j] <= num){
                            return false;
                        } else {
                            num = ans[i][j];
                        }
                    }
                } else {
                    if (ans[i][j] % 2 == 1){
                        return false;
                    } else {
                        if (ans[i][j] >= num){
                            return false;
                        } else {
                            num = ans[i][j];
                        }
                    }
                }
            }
        }

        return true;
    }
};