#include <bits/stdc++.h>
using namespace std;

#define print(a) for(auto x : a) {cout << x << " ";} cout << endl;

typedef long long lli;
typedef vector<int> vi;
typedef vector<lli> vl;

int main(){
	int n;
    cin >> n;
    int e = n & 0xAAAAAAAA;
    int o = n & 0x55555555;
    e >>= 1;
    o <<= 1;
    cout << o + e;
    return 0;
}
	