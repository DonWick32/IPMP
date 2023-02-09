class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t j = 1;
        int c = 0;
        for (int i = 0; i < 32; i++){
            if ((j & n) == j){
                c ++;
            }
            j *= 2;
        }
        return c;
    }
};