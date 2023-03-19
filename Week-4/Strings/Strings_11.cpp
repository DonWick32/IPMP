#include <bits/stdc++.h>
using namespace std;
int ic_strcmp(string s1, string s2)
{
	int i1 = 0;
    int i2 = 0;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    while (i1 < s1.size() && i2 < s2.size()){
        if (s1[i1] != s2[i2]){
            break;
        }
        i1 ++;
        i2 ++;
    }
    if (s1[i1] > s2[i1]){
            return 1;
        } else if (s1[i1] < s2[i1]) {
            return -1;
        } else {
           return 0;
        }
}

int main()
{
	cout<<"ret: "<<ic_strcmp("Geeks", "apple") <<endl;
	cout<<"ret: "<<ic_strcmp("", "ABCD")<<endl;
	cout<<"ret: "<<ic_strcmp("ABCD", "z")<<endl;
	cout<<"ret: "<<ic_strcmp("ABCD", "abcdEghe")<<endl;
	cout<<"ret: "<<ic_strcmp("GeeksForGeeks", "gEEksFORGeEKs")<<endl;
	cout<<"ret: "<<ic_strcmp("GeeksForGeeks", "geeksForGeeks")<<endl;
	return 0;
}
