void segregateAlphabetsNumbers(string& str) {
        int n = nums.size();
        int o = 0;
        for (int i = 0; i < n; i++){
            if (str[i] >= '0' && str[i] <= '9'){
                o ++;
            }
        }
        int ind = 0;
        while (o > 0){
            if (str[i] >= '0' && str[i] <= '9'){
                char k = str[ind];
                str.erase(str.begin() + ind);
                str += k;
                o --;
            } else {
                ind ++;
            }
        }
    }