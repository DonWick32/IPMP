/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   vector<TreeNode*> findPath(TreeNode* root, TreeNode* n) {
    vector<TreeNode*> path;
    findN(root, n, path);
    return path;
}

void findN(TreeNode* root, TreeNode* n, vector<TreeNode*>& arr) {
    if (root != NULL) {
        arr.push_back(root);

        if (root == n) {
            return;
        }

        if (root->left != NULL) {
            findN(root->left, n, arr);
            if (arr.back() == n) {
                return;
            }
        }

        if (root->right != NULL) {
            findN(root->right, n, arr);
            if (arr.back() == n) {
                return;
            }
        }

        if (arr.back() != n) {
            arr.pop_back();
        }
    }
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pNodes = findPath(root, p);
        vector<TreeNode*> qNodes = findPath(root, q);

        int i = pNodes.size() - 1;
        while (i >= 0) {
            int j = qNodes.size() - 1;
            while (j >= 0) {
                if (pNodes[i] == qNodes[j]) {
                    return pNodes[i];
                }
                j--;
            }
            i--;
        }

        return NULL;
    }
};