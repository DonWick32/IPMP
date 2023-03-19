class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        vector<vector<int>> arr(c, vector<int> (r, 0));
            for (int i = 0; i < r; i++){
                for (int j = 0; j < c; j++){
                    arr[j][i] = matrix[i][j];
                }
            }
        return arr;
    }
};