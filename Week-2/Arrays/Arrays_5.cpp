#include <bits/stdc++.h>

using namespace std;

int main() {
    
    vector <int> nums = { 2, 3, 7, 9, 11, 2, 3, 11 , 11};
    unordered_map <int, int> m;
    for (int x : nums){
            m[x] += 1;
    }
    for (auto it = m.begin(); it != m.end(); it++){
        if (it->second % 2 == 1){
            cout << it->first << " ";
        }
    }
    return 0;
}