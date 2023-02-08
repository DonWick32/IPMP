#include <bits/stdc++.h>
using namespace std;

#define print(a) for(auto x : a) {cout << x << " ";} cout << endl;

typedef long long lli;
typedef vector<int> vi;
typedef vector<lli> vl;

void countingSort(vi &arr, int n){
	int mini = arr[0], maxi = arr[0];
	for (int i = 0; i < n; i++){
		if (arr[i] < mini){
			mini = arr[i];
		}
		if (arr[i] > maxi){
			maxi = arr[i];
		}
	}
	int r = maxi - mini + 1;
	vi count (r, 0);
	vi op (n);
	for (int i = 0; i < n; i++){
		count[arr[i] - mini] += 1;
	}
	for (int i = 1; i < r; i++){
		count[i] += count[i-1];
	}
	for (int i = 0; i < n; i++){
		op[count[arr[i] - mini]-1] = arr[i];
		count[arr[i] - mini] -= 1;
	}
	for (int i = 0; i < n; i++){
		arr[i] = op[i];
	}
}

int main(){
	vi arr = {10, 4, 0, 20, 15};
	//SC = O(n)
	//TC: Best = O(n), Avg = O(n), Worst = O(n)
	//Not in place
	//Stable
	countingSort(arr, 5);
	print(arr);
	return 0;
}
	