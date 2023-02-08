#include <bits/stdc++.h>
using namespace std;

#define print(a) for(auto x : a) {cout << x << " ";} cout << endl;

typedef long long lli;
typedef vector<int> vi;
typedef vector<lli> vl;

void swap (int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

void bubbleSort(vi &arr, int n){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
}

int main(){
	vi arr = {10, 4, 0, 20, 15};
	//SC = O(1)
	//TC: Best (sorted) = O(n), Avg = O(n^2), Worst (reverse sorted) = O(n^2)
	//In place
	//Stable
	bubbleSort(arr, 5);
	print(arr);
	return 0;
}
	