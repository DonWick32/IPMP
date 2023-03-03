class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> ans;
        map<int, set<int, greater<int>>> freq;
        map <int, int> m;
        for (int i = 0; i < nums.size(); i++){
            m[nums[i]] ++;
        }
        for (auto x : m){
            if (freq.count(x.second) == 0){
                set<int, greater<int>> temp;
                temp.insert(x.first);
                freq[x.second] = temp;
            } else {
                freq[x.second].insert(x.first);
            }
        }
        for (auto x : freq){
            for (auto i : x.second){
                for (int j = 0; j < m[i]; j++){
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};