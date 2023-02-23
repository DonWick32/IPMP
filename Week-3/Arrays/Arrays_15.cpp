// C++ program to find the row with maximum
// number of 1s
#include <bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>> &mat, int r, int c){
    int maxi = 0;
    int count = c - 1;
    int ind = c - 1;
	for (int j = c - 1; j >= 0; j--){
        if (mat[0][j] == 0){
            count = j;
            break;
        }
    }
    int i = 1;
    while (i < r){
        if (mat[i][count] == 0){
            i ++;
        } else {
            while (mat[i][count] == 1){
                count --;
            }
            ind = i;
            if (count < 0){
                break;
            }
            i ++;
        }
    }
    return ind;
}

int main(){
	vector<vector<int>> mat= { {0, 0, 0, 1},
					{0, 1, 1, 1},
					{0, 1, 1, 1},
					{1, 1, 1, 1}};

	cout << "Index of row with maximum 1s is " << rowWithMax1s(mat, 4, 4);

	return 0;
}
