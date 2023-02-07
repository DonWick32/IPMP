class Solution {
public:
    int pivot(vector<int>& nums) {
        int l = 0;
        int r = nums.size() -1;
        int m = 0;
        while (l < r){
            m = (l + r)/2;
                if (m > 0 && nums[m] < nums[m-1]){
                    return m-1;
                }
                
                if (m < nums.size() - 1 && nums[m] > nums[m+1]){
                    return m;
                }
                if (nums[m] < nums[r]){
                    r = m;
                } else {
                    l = m + 1;
                }
        }
        return -1;
    }
    int binarySearch(vector<int>& nums, int key,int l, int r){
        while (l <= r){
            int m = (l + r)/2;
            cout << nums[m] << endl;
            if (nums[m] == key){
                return m;
            } else if (nums[m] > key){
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        
        int p = pivot(nums);
        if (nums.size() > 1 && nums[0] > nums[1]){
            p = 0;
        }
        int ans1 = binarySearch(nums, target, 0, p);
        int ans2 = binarySearch(nums, target, p+1, nums.size()-1);
        if (ans1 == -1){
            if (ans2 == -1){
                return -1;
            } else {
                return ans2;
            }
        } else {
            return ans1;
        }
    }
};

