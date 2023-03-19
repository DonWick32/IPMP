// C++ program to remove duplicates
#include <bits/stdc++.h>
using namespace std;

string removeChars(string str1, int n1, string str2, int n2){
	vector <int> alpha (26, 0);
    for (char x : str2){
        alpha[x - 'a'] += 1;
    }
    int i = 0;
    while (i < str1.size()){
        if (alpha[str1[i] - 'a'] > 0){
            auto it = find(str1.begin(), str1.end(), str1[i]);
            str1.erase(it);
        } else {
            i ++;
        }
    }
    return str1;
}

int main()
{
	string str1 = "geeksforgeeks";
	string str2 = "mesk";
	cout << removeChars(str1, str1.size(), str2, str2.size()) << endl;
	return 0;
}
