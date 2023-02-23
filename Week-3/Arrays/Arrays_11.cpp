vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        if (n < 4){
            return res;
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; i++) {
            long long s = 0;
            if (i > 0 && nums[i] == nums[i-1]) continue;
            s = nums[i];
            s += nums[i+1];
            s += nums[i+2];
            s += nums[i+3];
            if (s > target) break;
            s = nums[i];
            s += nums[n - 3];
            s += nums[n - 2];
            s += nums[n - 1];
            if (s < target) continue;

            for (int j = i+1; j < n - 2; j++) {
                if (j > i+1 && nums[j] == nums[j-1]) continue;
                s = nums[i];
                s += nums[j];
                s += nums[j + 1];
                s += nums[j + 2];
                if (s > target) break;
                s = nums[i];
                s += nums[j];
                s += nums[n - 2];
                s += nums[n - 1];
                if (s < target) continue;

                int l = j+1, r = n-1;
                while (l < r) {
                    s = nums[i];
                    s += nums[j];
                    s += nums[l];
                    s += nums[r];
                    if (s < target) {
                        l++;
                    } else if (s > target) {
                        r--;
                    } else {
                        res.push_back({nums[i], nums[j], nums[l], nums[r]});
                        l++; r--;
                        while (l < r && nums[l] == nums[l-1]) l++;
                        while (l < r && nums[r] == nums[r+1]) r--;
                    }
                }
            }
        }
        return res;
    }