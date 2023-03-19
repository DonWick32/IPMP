class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long curr = 0, maxi = LONG_LONG_MIN, count = 0;
        for (long long i = 0; i < nums.size(); i++){
            if (nums[i] < 0){
                count ++;
            }
            curr += nums[i];
            if (curr < 0){
                curr = 0;
            }
            if (curr > maxi){
                maxi = curr;
            }
        }
        if (count == nums.size()){
            return *max_element(nums.begin(), nums.end());
        }
        else {
            return maxi;
        }
    }
};