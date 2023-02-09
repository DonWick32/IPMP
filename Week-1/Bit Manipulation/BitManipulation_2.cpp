class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string s;
        uint32_t ans = 0;
        while (n > 0){
            int rem = n % 2;
            if (rem == 0){
                s += '0';
            } else {
                s += '1';
            }
            n /= 2;
        }
        while (s.size() != 32){
            s += '0';
        }
        for (char x : s){
            ans = ans * 2 + (char)x - (char)'0';
        }
        return ans;
    }
};