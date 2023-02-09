#include <bits/stdc++.h>
using namespace std;

#define print(a) for(auto x : a) {cout << x << " ";} cout << endl;

typedef long long lli;
typedef vector<int> vi;
typedef vector<lli> vl;

int main(){
	int n;
    cin >> n;
    int a = n & 0x0F;
    int b = n & 0xF0;
    cout << (b >> 4) + (a << 4);
    return 0;
}