class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> alpha (256, 0);
        for (int i = 0; i < t.size(); i++){
            alpha[t[i]] ++;
        }

        vector<int> beta (256, 0);
            for (int i = 0; i < s.size(); i++){
                beta[s[i]] ++;
            }
            for (int i = 0; i < 256; i++){
                if (alpha[i] > beta[i]){
                    return "";
                }
            }


        if (s.size() < t.size()){
            return "";
        }

        if (s.size() == t.size()){
            return s;
        }

        int i = 0;
        int j = 0;
        int c = 0;
        int maxc = 0;
        int maxi = 0;
        int maxj = 0;
        vector<int> temp (256, 0);
        while (j < s.size()){
            temp[s[j]] ++;
            if (alpha[s[j]] > 0 && temp[s[j]] <= alpha[s[j]]){
                c ++;
            }
            j ++;
            if (c == t.size()){
                break;
            }
        }
        if (c == 0){
            return "";
        }
        maxi = i;
        maxj = j;
        maxc = j - i;
        while (j <= s.size()){
            if (c == t.size()){
                if (maxc > j - i){
                    maxc = j - i;
                    maxi = i;
                    maxj = j;
                }
                temp[s[i]] --;
                if (alpha[s[i]] > 0 && temp[s[i]] < alpha[s[i]]){
                    c --;
                }
                i ++;
            }else{
                if (j == s.size()){
                    break;
                }
                temp[s[j]] ++;
                if (alpha[s[j]] > 0 && temp[s[j]] <= alpha[s[j]]){
                    c ++;
                }
                j ++;
            }
        }
        return s.substr(maxi, maxj - maxi);
    }
};