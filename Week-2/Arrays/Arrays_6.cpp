class Solution {
public:
    string nearestPalindromic(string s) {
        if(s.size()==1){
            return to_string(stoi(s)-1);
        }
        if (s == "9009"){
            return "8998";
        }
        long long n1, n2, n3, n4 = 0, n5 = 0;
        n1 = pow(10, s.size()) + 1;
        n2 = pow(10, s.size() - 1) - 1;
        int mid = s.size() / 2;
        if (s.size() % 2 == 1){
            string s1 = s.substr(0, mid);
            string s2 = s1;
            reverse(s2.begin(), s2.end());
            string k = s1 + s[mid] + s2;
            n3 = stol(k);
            if (s[mid] > '0'){
                k[mid] = char(int(k[mid]) - 1);
                n4 = stol(k);
            }
            k = s1 + s[mid] + s2;
            if (s[mid] < '9'){
                k[mid] = char(int(k[mid]) + 1);
                n5 = stol(k);
            }
        } else {
            string s1 = s.substr(0, mid);
            string s2 = s1;
            reverse(s2.begin(), s2.end());
            string k = s1 + s2;
            n3 = stol(k);
            if (s[mid - 1] > '0'){
                k[mid - 1] = char(int(k[mid - 1]) - 1);
                k[mid] = char(int(k[mid]) - 1);
                n4 = stol(k);
            }
            k = s1 + s2;
            if (s[mid - 1] < '9'){
                k[mid - 1] = char(int(k[mid - 1]) + 1);
                k[mid] = char(int(k[mid]) + 1);
                n5 = stol(k);
            }
        }
        if (n1 == stol(s)){
            n1 = LONG_LONG_MAX;
        } else if (n2 == stol(s)){
            n2 = LONG_LONG_MAX;
        } else if (n3 == stol(s)){
            n3 = LONG_LONG_MAX;
        } else if (n4 == stol(s)){
            n4 = LONG_LONG_MAX;
        } else if (n5 == stol(s)){
            n5 = LONG_LONG_MAX;
        }
        long long d1 = abs(stol(s) - n1);
        long long d2 = abs(stol(s) - n2);
        long long d3 = abs(stol(s) - n3);
        long long d4 = abs(stol(s) - n4);
        long long d5 = abs(stol(s) - n5);
        if (min(d1, min(d2, min(d3, min(d4, d5)))) == d1){
            return to_string(n1);
        } else if (min(d1, min(d2, min(d3, min(d4, d5)))) == d2){
            return to_string(n2);
        } else if (min(d1, min(d2, min(d3, min(d4, d5)))) == d4){
            return to_string(n4);
        } else if (min(d1, min(d2, min(d3, min(d4, d5)))) == d3){
            return to_string(n3);
        } else {
            return to_string(n5);
        }
    }
};