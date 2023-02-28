class Solution {
public:
    int myAtoi(string s) {
        string num = "";
        bool p = true;
        int i;
        int sign = 0;
        for (i = 0; i < s.size(); i++){
            if ((s[i] >= 'a' && s[i] <= 'z') or (s[i] >= 'A' && s[i] <= 'Z') or (s[i] == '.')){
                return 0;
            }
            if (s[i] == '+' or s[i] == '-'){
                sign ++;
            }
            if (s[i] >= '0' && s[i] <= '9'){
                if (i > 0){
                    if (s[i-1] == '-'){
                        p = false;
                    }
                }
                break;
            }
        }
        if (sign == 1){
            if (sign = 1 && (s[i - 1] != '-' && s[i - 1] != '+')){
                return 0;
            }
        }
        if (sign > 1){
            return 0;
        }
        bool flag;
        if (s[i] == '0'){
            flag = true;
        } else {
            false;
        }
        while (s[i] >= '0' && s[i] <= '9'){
            if (flag == true && s[i] > '0' && s[i] <= '9'){
                flag = false;
                num += s[i];
            } else if (flag == false){
                num += s[i];
            }
            i ++;
        }
        long long n = 0;
        cout << num;
        if (p) {
            if (num.size() > 10){
                return INT_MAX;
            }
        } else {
            if (num.size() > 10){
                return INT_MIN;
            }
        }
        for (char x : num){
            n = (long long) n * 10 + (int) x - (int) '0';
        }
        if (p){
            if (n > INT_MAX){
                return INT_MAX;
            } else {
                return n;
            }
        } else {
            n = -n;
            if (n < INT_MIN){
                return INT_MIN;
            } else {
                return n;
            }
        }
    }
};