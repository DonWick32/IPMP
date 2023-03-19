class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map <int, int> m;
        for (int i = 0; i < nums.size(); i++){
            for (int j = 0; j < nums[i].size(); j++){
                m[nums[i][j]] ++;
            }
        }
        vector<int> ans;
        for (auto it : m){
            if (it.second == nums.size()){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};