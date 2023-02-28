#include <bits/stdc++.h>

using namespace std;

void printDups(string str)
{
	unordered_map<char, int> m;
	for (int i = 0; i < str.size(); i++) {
		m[str[i]]++;
	}

	for (auto it : m) {
		if (it.second > 1)
			cout << it.first << ", count = " << it.second << endl;
	}
}
int main()
{
	string str = "test string";
	printDups(str);
	return 0;
}
