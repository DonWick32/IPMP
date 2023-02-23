class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini = nums[0];
        int maxi = -1;
        for (int i = 1; i < nums.size(); i++){
            if (mini >= nums[i]){
                mini = nums[i];
            } else {
                int diff = nums[i] - mini;
                if (diff > maxi){
                    maxi = diff;
                }
            }
        }
        return maxi;
    }
};