class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        vector <int> trip = {nums[0]};
        for (int i = 1; i < nums.size(); i++){
            if (trip.size() == 3){
                break;
            } else if (trip.size() == 1){
                if (nums[i] > trip[0]){
                    trip.push_back(nums[i]);
                } else if (nums[i] < trip[0]){
                    trip[0] = nums[i];
                }
            } else if (trip.size() == 2){
                int a = trip[0];
                int b = trip[1];
                if (nums[i] < a){
                    if (i < nums.size() - 1){
                        if (nums[i + 1] > nums[i] && nums[i+1] <= a){
                            a = nums[i];
                            b = nums[i+1];
                            trip[0] = a;
                            trip[1] = b;
                        } else if (nums[i + 1] > nums[i] && nums[i + 1] > a && nums[i + 1] < b) {
                            a = nums[i];
                            b = nums[i+1];
                            trip[0] = a;
                            trip[1] = b;
                        }
                    } else {
                        continue;
                    }
                } else if (nums[i] > b){
                    trip.push_back(nums[i]);
                } else if (nums[i] > a && nums[i] < b){
                    trip[1] = nums[i];
                }
            }
        }
        if (trip.size() == 3){
            return true;
        } else {
            return false;
        }
    }
};