class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            if (nums[i] == 0){
                zero ++;
            } else if (nums[i] == 1){
                one ++;
            } else {
                two ++;
            }
        }
        int ind = 0;
        while (one > 0){
            if (nums[ind] == 1){
                int k = nums[ind];
                nums.erase(nums.begin() + ind);
                nums.push_back(k);
                one --;
            } else {
                ind ++;
            }
        }
        ind = 0;
        while (two > 0){
            if (nums[ind] == 2){
                int k = nums[ind];
                nums.erase(nums.begin() + ind);
                nums.push_back(k);
                two --;
            } else {
                ind ++;
            }
        }
    }
};