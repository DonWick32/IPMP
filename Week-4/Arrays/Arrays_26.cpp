class Solution {
public:
    vector<int> o;
    vector<int> n;
    Solution(vector<int>& nums) {
        this->o = nums;
    }
    
    vector<int> reset() {
        this->n = this->o;
        return n;
    }
    
    vector<int> shuffle() {
        this->n = this->o;
        for (int i = this->n.size() - 1; i > 0; i--){
            int j = rand() % (i + 1);
            swap(this->n[i], this->n[j]);
        }
        return this->n;
    }
};