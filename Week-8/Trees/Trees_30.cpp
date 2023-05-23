class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isValidBSTHelper(root, INT_MIN, INT_MAX);
    }

    bool isValidBSTHelper(TreeNode* root, int min1, int max1) {
        if (root == nullptr) {
            return true;
        }

        if (root->left != nullptr && (maxi(INT_MIN, root->left) >= root->val || mini(INT_MAX, root->left) >= root->val)) {
            return false;
        }

        if (root->right != nullptr && (maxi(INT_MIN, root->right) <= root->val || mini(INT_MAX, root->right) <= root->val)) {
            return false;
        }

        return isValidBST(root->left) && isValidBST(root->right);
    }

    int maxi(int max1, TreeNode* root) {
        if (root == nullptr) {
            return max1;
        }
        return max(root->val, max(maxi(max1, root->left), maxi(max1, root->right)));
    }

    int mini(int min1, TreeNode* root) {
        if (root == nullptr) {
            return min1;
        }
        return min(root->val, min(mini(min1, root->left), mini(min1, root->right)));
    }
};