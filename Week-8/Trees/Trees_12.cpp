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

    map<pair<int, int>, vector<TreeNode*>> ans;
    // map< int, vector<TreeNode*>> group;

    // map<pair<int, int>, vector<TreeNode*>> process (
    void process (
        TreeNode* root, 
        // map<pair<int, int>, vector<TreeNode*>> ans, 
        map<TreeNode*, pair<int, int>> m
    ){
        if (root != NULL){
            if (root->left != NULL){
                pair<int, int> coord = m[root];
                coord.second += 1;
                coord.first -= 1;
                if (ans.count(coord) > 0){
                    vector<TreeNode*> nodes = ans[coord];
                    nodes.push_back(root->left);
                    ans[coord] = nodes;
                    
                } else {
                    vector<TreeNode*> nodes;
                    nodes.push_back(root->left);
                    ans[coord] = nodes;
                }
                // group[coord.second].push_back(root->left);
                m[root->left] = coord;

                cout << root->left->val << " " << coord.first << " " << coord.second << endl;
                // process(root->left, ans, m);
                process(root->left, m);
            }
            if (root->right != NULL){
                pair<int, int> coord = m[root];
                coord.second += 1;
                coord.first += 1;
                if (ans.count(coord) > 0){
                    vector<TreeNode*> nodes = ans[coord];
                    nodes.push_back(root->right);
                    ans[coord] = nodes;
                } else {
                    vector<TreeNode*> nodes;
                    nodes.push_back(root->right);
                    ans[coord] = nodes;
                }
                // group[coord.second].push_back(root->right);
                m[root->right] = coord;
                cout << root->right->val << " " << coord.first << " " << coord.second << endl;
                // process(root->right, ans, m);
                process(root->right, m);
            }
        }
        // return ans;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<TreeNode*, pair<int, int>> m;
        vector<TreeNode*> nodes;
        pair<int, int> coord = {0, 0};
        nodes.push_back(root);
        ans[coord] = nodes;
        m[root] = coord;

        // ans = process(root, ans, m);
        process(root, m);

        vector<vector<int>> op;
        vector<int> nums;
        vector<int> dums;
        bool flag = false;

        for (auto x : ans){

            vector<int> kums;
            for (auto y : x.second){
                
                cout << y->val << " (" << x.first.first << ", " << x.first.second << ")" << endl;
                if (nums.size() > 0){
                    if (x.first.first != dums[0]){
                        flag = true;
                    }
                }
                if (flag == true){
                    // vector<int> arr (nums.begin(), nums.end());

                    // sort(nums.begin(), nums.end());

                    op.push_back(nums);
                    nums.clear();
                    dums.clear();
                    flag = false;
                }

                dums.push_back(x.first.first);
                kums.push_back(y->val);
            }

            sort(kums.begin(), kums.end());
            for (int i : kums){
                nums.push_back(i);
            }
            kums.clear();

            cout << "HI" << endl;

            // for (auto z : group){
            //     if (z.first == x.first.second){
            //         for (auto num : z.second){
            //             // if (find(nums.begin(), nums.end(), )){}
            //             nums.insert(num->val);
            //         }
            //     }
            // }
        }

        op.push_back(nums);

        return op;
    }
};