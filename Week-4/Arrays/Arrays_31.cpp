class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int o = 0;
        for (int i = 0; i < n; i++){
            if (nums[i] == 0){
                o ++;
            }
        }
        int ind = 0;
        while (o > 0){
            if (nums[ind] == 0){
                int k = nums[ind];
                nums.erase(nums.begin() + ind);
                nums.push_back(k);
                o --;
            } else {
                ind ++;
            }
        }
    }
};