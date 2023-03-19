class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {

        vector <int> ans;
        int r = mat.size();
        int c = mat[0].size();

        int n = r * c;

        int i = 0, j = 0;
        int dir = 0;
        while (n > 0){
            if (dir == 0){
                ans.push_back(mat[i][j]);
                n --;
                while (i > 0 && j < c - 1){
                    i --;
                    j ++;
                    ans.push_back(mat[i][j]);
                    n --;
                }
                if (j + 1 < c){
                    j ++;
                } else {
                    i ++;
                }
                dir = 1;
            } else {
                ans.push_back(mat[i][j]);
                n --;
                while (j > 0 && i < r - 1){
                    i ++;
                    j --;
                    ans.push_back(mat[i][j]);
                    n --;
                }
                if (i + 1 < r){
                    i ++;
                } else {
                    j ++;
                }
                dir = 0;
            }
        }
        return ans;
    }
};