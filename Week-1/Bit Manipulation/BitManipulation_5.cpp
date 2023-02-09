#include <bits/stdc++.h>
using namespace std;

#define print(a) for(auto x : a) {cout << x << " ";} cout << endl;

typedef long long lli;
typedef vector<int> vi;
typedef vector<lli> vl;

int leftRotate (int n){
    int i = 1;
    long long j = pow(2, 31);
    int msb = n & j;
    n = n << 1;
    if (msb == j){
        n += i;
    }
    return n;
}

int rightRotate (int n){
    int i = 1;
    long long j = pow(2, 31);
    int lsb = n & i;
    n = n >> 1;
    if (lsb == i){
        n += j;
    }
    return n;
}

int main(){
	int n;
    cin >> n;
    cout << leftRotate(n) << " " << rightRotate(n);
	return 0;
}
	