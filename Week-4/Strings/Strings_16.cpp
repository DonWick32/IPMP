class Solution {
public:

string rem (string s, int i, int j){
    if (i == j){
        return s.substr(i, 1);
    }
    if (j - i == 1){
        if (s[i] == s[j]){
            return "";
        } else {
            return s.substr(i, 2);
        }
    }
    int mid = (i + j) / 2;
    string temp1 = rem(s, i, mid);
    string temp2 = rem(s, mid + 1, j);
    string k1 = "";
    string k2 = "";
    while (k1 != temp1 or k2 != temp2){
        k1 = temp1;
        k2 = temp2;
        if (temp1.size() > 0 && temp2.size() > 0){
            if (temp1[temp1.size() - 1] == temp2[0]){
                temp1 = temp1.substr(0, temp1.size() - 1);
                temp2 = temp2.substr(1, temp2.size() - 1);
            }
        }
    }
    return temp1 + temp2;
}

string removeDuplicates(string s) {
        return rem(s, 0, s.size() - 1);
}
};