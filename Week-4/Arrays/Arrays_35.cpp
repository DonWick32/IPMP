class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set <int> r;
        set <int> c;
        for (int i = 0; i < matrix.size(); i++){
            for (int j = 0; j < matrix[i].size(); j++){
                if (matrix[i][j] == 0){
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        for (auto x : r){
            for (int j = 0; j < matrix[0].size(); j++){
                matrix[x][j] = 0;
            }
        }
        for (auto y : c){
            for (int i = 0; i < matrix.size(); i++){
                matrix[i][y] = 0;
            }
        }
    }
};