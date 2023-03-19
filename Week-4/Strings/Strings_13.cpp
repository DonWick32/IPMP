// C++ program to check whether two strings are anagrams
// of each other
#include <bits/stdc++.h>
using namespace std;

/* function to check whether two strings are anagram of
each other */
bool areAnagram(string str1, string str2)
{
	// Get lengths of both strings
	int n1 = str1.length();
	int n2 = str2.length();

    vector <int> alpha1 (26, 0);
    vector <int> alpha2 (26, 0);
    for (int i = 0; i < n1; i++){
        alpha1[str1[i] - 'a'] ++;
    }
    for (int i = 0; i < n2; i++){
        alpha2[str2[i] - 'a'] ++;
    }
    for (int i = 0; i < 26; i++){
        if (alpha1[i] != alpha2[i]){
            return false;
        }
    }
    return true;
}

int main()
{
	string str1 = "gram";
	string str2 = "armg";

	if (areAnagram(str1, str2))
		cout << "The two strings are anagram of each other";
	else
		cout << "The two strings are not anagram of each "
				"other";

	return 0;
}
