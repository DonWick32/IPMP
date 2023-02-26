class Solution {
public:
    int firstUniqChar(string s){
        string temp = "abcdefghijklmnopqrstuvwxyz";
        map <char, int> m;
        for (char x : temp){
            m[x] = 0;
        }
        for (char x : s){
            m[x] ++;
        }
        for (int i = 0; i < s.size(); i++){
            if (m[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};