#include <bits/stdc++.h>
using namespace std;

void moveNumberToSecondHalf(string &str){
    string l = "";
    string r = str;
    int ind = 0;
    while (ind < str.size() / 2){
        l += str[ind];
        char c = str[ind + 1];
        r = str.substr(ind + 2, str.size() - l.size() - 1);
        str = l + r + c;
        ind ++;
    }
}

int main(){
	string str = "a1b2c3d4e5f6g7h";
	moveNumberToSecondHalf( str );
	cout << str;
	return 0;
}