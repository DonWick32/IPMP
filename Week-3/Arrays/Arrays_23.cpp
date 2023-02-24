class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int dir = 0;
        int rLen = matrix[0].size();
        int cLen = matrix.size();
        int c = (rLen) * (cLen);
        int i = 0, j = 0;
        while (c > 0){
            if (dir == 0){
                int k = rLen - 1;
                while (k >= 0){
                    ans.push_back(matrix[i][j]);
                    c --;
                    k --;
                    j ++;
                }
                j--;
                i++;
                rLen --;
                dir = 1;
            } else if (dir == 1){
                int k = cLen - 1;
                while (k > 0){
                    ans.push_back(matrix[i][j]);
                    c --;
                    k --;
                    i ++;
                }
                i--;
                j--;
                cLen --;
                dir = 2;
            } else if (dir == 2){
                int k = rLen - 1;
                while (k >= 0){
                    ans.push_back(matrix[i][j]);
                    c --;
                    k --;
                    j --;
                }
                j++;
                i--;
                rLen --;
                dir = 3;
            } else {
                int k = cLen - 1;
                while (k > 0){
                    ans.push_back(matrix[i][j]);
                    c --;
                    k --;
                    i --;
                }
                i++;
                j++;
                cLen --;
                dir = 0;
            }
        }
        return ans;
    }
};