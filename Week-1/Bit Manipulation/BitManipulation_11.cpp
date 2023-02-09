#include <bits/stdc++.h>
using namespace std;

#define print(a) for(auto x : a) {cout << x << " ";} cout << endl;

typedef long long lli;
typedef vector<int> vi;
typedef vector<lli> vl;

int main(){
	int n;
    cin >> n;
    double d = log2(n);
    if ((double)((int) d) == d){
        cout << ((int) d) + 1;
    }
    else {
        cout << -1;
    }
    return 0;
}