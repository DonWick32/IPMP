void boundaryOrder(TreeNode* root) {
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
            cout << ans[i][0] << " ";
        }

        for (int j = 1; j < ans[ans.size() - 1].size(); j++){
            cout << ans[ans.size() - 1][j] << " ";
        }

        for (int i = ans.size() - 2; i >= 0; i--){
            if (ans[i].size() > 1){
                cout << ans[i][ans[i].size() - 1] << " ";
            }
        }
}