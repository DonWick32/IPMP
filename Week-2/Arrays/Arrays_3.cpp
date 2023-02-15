class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s = 0;
        for (int x : nums){
            s += x;
        }
        return ((nums.size() + 1) * (nums.size())/2) - s;
    }
};