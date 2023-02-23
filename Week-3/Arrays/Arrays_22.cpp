class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int li = 0,ri = rows - 1;
        if (rows == 1 && cols == 1){
            if (target == matrix[0][0]){
                return true;
            }
        }
        while (li <= ri){
            int mi = (li + ri) / 2;
            if (target == matrix[mi][0]){
                return true;
            } else if (target > matrix[mi][0]){
                li = mi + 1;
                mi = (li + ri)/2;
            } else {
                ri = ri - 1;
                mi = (li + ri)/2;
            }
        }
        int rowInd;
        if (li == 0){
            return false;
        }
        rowInd = li - 1;
        int lj = 0,rj = cols - 1;
        cout << rowInd;
        while (lj <= rj){
            int mj = (lj + rj) / 2;
            if (target == matrix[rowInd][mj]){
                return true;
            } else if (target > matrix[rowInd][mj]){
                lj = mj + 1;
                mj = (lj + rj)/2;
            } else {
                rj = rj - 1;
                mj = (lj + rj)/2;
            }
        }
        return false;
    }
};