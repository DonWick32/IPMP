class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix (n, 1);
        prefix[0] = nums[0];
        vector<int> suffix (n, 1);
        suffix[n-1] = nums[n-1];
        vector<int> ans;
        int z = 0;
        int p = 1;

        for (int i = 0; i < n; i++){
            if (nums[i] != 0){
                p *= nums[i];
            } else {
                z ++;
            }
        }
        if (z == 1){
            for (int i = 0; i < n; i++){
                if (nums[i] == 0){
                    ans.push_back(p);
                } else {
                    ans.push_back(0);
                }
            }
            return ans;
        } else if (z > 1){
            for (int i = 0; i < n; i++){
                ans.push_back(0);
            }
            return ans;
        }
        for (int i = 1; i < n; i++){
            prefix[i] = prefix[i-1] * nums[i];
        }
        for (int i = n - 2; i >= 0; i--){
            suffix[i] = suffix[i+1] * nums[i];
        }
        ans.push_back(suffix[1]);
        for (int i = 1; i < n - 1; i++){
            cout << 1 << endl;
            ans.push_back(prefix[i-1]*suffix[i+1]);
        }
        cout << 2 << endl;
        ans.push_back(prefix[n-2]);
        return ans;
    }
};