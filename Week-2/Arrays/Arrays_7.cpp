class Solution {
public:
    int nextGreaterElement(int n) {
        int cpy = n;
        vector <int> arr;
        while (cpy > 0){
            arr.push_back(cpy%10);
            cpy /= 10;
        }
        if (arr.size() == 1){
            return -1;
        } else {
            int slow = 0;
            int fast = 1;
            bool flag = false;
            while (fast < arr.size()){
                if (arr[slow] > arr[fast]){
                    auto maxi = upper_bound(arr.begin(), arr.begin() + slow, arr[fast]);
                    if (*maxi > arr[fast]){
                        int temp = arr[fast];
                        arr[fast] = *maxi;
                        arr[maxi - arr.begin()] = temp;
                        sort(arr.begin(), arr.begin() + fast, greater<int>());
                        flag = true;
                        break;
                    }
                }
                slow ++;
                fast ++;
            }
            
            int ans = 0;
            for (int i = arr.size() - 1; i >= 0; i--){
                long temp = (long) ans * 10 + arr[i];
                if (temp > pow(2, 31) - 1){
                    return -1;
                }
                ans = temp;
            }
            if (ans < 0 or (flag == false)){
                return -1;
            } else {
                return ans;
            }
        }
    }
};