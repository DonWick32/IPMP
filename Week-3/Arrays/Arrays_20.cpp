class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set <int> dupe;
        for (int i = 0; i < nums.size(); i++){
            int val = abs(nums[i]);
            if (nums[val - 1] < 0){
                dupe.insert(val);
            } else {
                nums[val - 1] = -nums[val - 1];
            }
        }
        vector <int> ans (dupe.size());
        copy (dupe.begin(), dupe.end(), ans.begin());
        return ans;
    }
};