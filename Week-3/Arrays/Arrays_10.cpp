#include <bits/stdc++.h>

using namespace std;

void threeSum(vector<int>& nums, int target) {
        vector <int> ans;
        bool flag = false;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++){
            int l = 0, r = nums.size() - 1;
            while (l != r){
                int sum = nums[l] + nums[i] + nums[r];
                if (sum == target && l != r && l != i){
                    ans.push_back(nums[l]);
                    ans.push_back(nums[i]);
                    ans.push_back(nums[r]);
                    cout << nums[l] << " " << nums[i] << " " << nums[r];
                    flag = true;
                    break;
                } else if (sum > target){
                    r --;
                } else {
                    l ++;
                }
            }
            if (flag){
                break;
            }
        }
        if (!flag)
            cout << -1 << " " << -1 << " " << -1;
    }

int main(){
    vector<int> arr = {12, 3, 4, 1, 6, 9};
    threeSum(arr, 24);
    return 0;
}