class Solution {
public:
    int minBitFlips(int start, int goal) {
        long long j = 1, c = 0;
        for (int i = 0; i < 32; i++){
            if ((start & j) != (goal & j)){
                c++;
            }
            j *= 2;
        }
        return c;
    }
};