class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans (2);
        unordered_map<int,int> m;
        for (int i = 0; i < nums.size(); i++){
            int rem = target - nums[i];
            if (m.find(rem) != m.end()){
                ans[0] = i;
                ans[1] = m[rem];
                return ans;
            }
            m[nums[i]] = i;
        }
        return ans;
    }
};