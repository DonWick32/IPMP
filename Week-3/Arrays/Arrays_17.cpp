class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector <int> diff (n - 1);
        vector <int> nums1 (n - 1);
        vector <int> nums2 (n - 1);
        int mini = INT_MAX;
        for (int i = 0; i < n - 1; i ++){
            diff[i] = arr[i + 1] - arr[i];
            nums1[i] = arr[i];
            nums2[i] = arr[i+1];
            if (diff[i] < mini){
                mini = diff[i];
            }
        }
        vector<vector<int>> ans;
        for (int i = 0; i < n - 1; i++){
            if (diff[i] == mini){
                ans.push_back({nums1[i], nums2[i]});
            }
        }
        return ans;
    }
};