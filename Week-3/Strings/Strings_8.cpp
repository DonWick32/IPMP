#include <bits/stdc++.h>
using namespace std;

void encode(string str)
{
	int n = str.length();
    char mem = str[0];
    int c = 0;
	for (int i = 0; i < n; i++) {
        char curr = str[i];
        if (curr == mem){
            c ++;
        } else {
            cout << mem << c ;
            c = 1;
            mem = str[i];
        }
	}
    if (c != 0){
        cout << mem << c ;
        c = 0;
    }
}

string decode(string str) {
        string ans = "";
        for (int i = 0; i < str.size() - 1; i += 2){
            char a = str[i];
            int b = (int) str[i + 1] - (int) '0';
            for (int j = 0; j < b; j++){
                ans += a;
            }
        }
        return ans;
}
//Driver code
int main()
{
	string str = "wwwwaaadexxxxxxywww";
	encode(str);
    cout << endl << decode("w4a3d1e1x6y1w3") << endl;
	return 0;
}
