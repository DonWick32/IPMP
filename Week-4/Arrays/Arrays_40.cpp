class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int> n;
        // for (int i = 0; i < k; i++){
        //     int temp = nums[nums.size() - 1];
        //     nums.pop_back();
        //     // nums.insert(nums.begin(), temp);
        //     n.push_back(temp);
        // }
        for (int i = nums.size() - k; i < nums.size(); i++){
            n.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size() - k; i++){
            n.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++){
            nums[i] = n[i];
        }
    }
};