#include <bits/stdc++.h>
using namespace std;

#define print(a) for(auto x : a) {cout << x << " ";} cout << endl;

typedef long long lli;
typedef vector<int> vi;
typedef vector<lli> vl;

int main(){
	int n;
    cin >> n;
    int  mask = n >> 31;
    cout << ((n + mask) ^ mask);
    return 0;
}
	