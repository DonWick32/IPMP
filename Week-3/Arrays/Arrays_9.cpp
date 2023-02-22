class Solution {
public:
    int countTriples(int n) {
        vector <int> sq;
        for (int i = 1; i*i <= n * n; i++){
            sq.push_back(i * i);
            cout << i * i << " ";
        } cout << endl;
        int c = 0;
        for (int i = 1; i <= n; i++){
            for (int j = 0; j < sq.size(); j++){
                int num = abs(i * i - sq[j]);
                if (find(sq.begin(), sq.end(), num) != sq.end()){
                    c ++;
                }
            }
        }
        return c/2;
    }
};