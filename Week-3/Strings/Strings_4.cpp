class Solution {
public:
    string reverseWords(string s) {
        vector<string> str;
        string temp = "";
        for (char x : s){
            if (x == ' '){
                if (temp != ""){
                    str.push_back(temp);
                    temp = "";
                }
            } else {
                temp += x;
            }
        }
        if (temp != ""){
            str.push_back(temp);
        }
        reverse(str.begin(), str.end());
        string ans = "";
        for (int i = 0; i < str.size() - 1; i++){
            ans += (str[i] + " ");
        }
        ans += str[str.size() - 1];
        return ans;
    }
};