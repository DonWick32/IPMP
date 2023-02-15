class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int, int> m;
        for (int x : nums){
            if (m.count(x) == 0){
                m[x] = 1;
            } else {
                m[x] += 1;
            }
        }
        for (auto it = m.begin(); it != m.end(); it++){
            if (it->second % 2 == 1){
                return it->first;
            }
        }
        return 0;
    }
};