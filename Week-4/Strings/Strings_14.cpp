class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0;
        int n = s.size();
        int c = 0;
        int maxi = 0;
        string t = "";
        vector <int> alpha (256, 0);

        for (int i = 0; i < n; i++){
            cout << s[i] << " " << alpha[s[i]] << endl;
            if (alpha[s[i]] == 0){
                t += s[i];
                alpha[s[i]] ++;
                if (t.size() > maxi){
                    maxi = t.size();
                }
            } else {
                while (t[0] != s[i] && t.size() > 1){
                    alpha[t[0]] --;
                    t = t.substr(1, t.size() - 1);
                }
                alpha[t[0]] --;
                t = t.substr(1, t.size() - 1);
                t += s[i];
                alpha[s[i]] ++;
            }
            cout << t << endl;
        }
        return maxi; 
    }
};