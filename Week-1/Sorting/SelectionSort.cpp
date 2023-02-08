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

void selectionSort(vi &arr, int n){
	for (int i = 0; i < n - 1; i++){
		int mini = i;
		for (int j = i + 1; j < n; j++){
			if (arr[mini] > arr[j]){
				mini = j;
			}
		}
		if (arr[mini] != arr[i]){
			swap(arr[i], arr[mini]);
		}
	}
}

int main(){
	vi arr = {10, 4, 0, 20, 15};
	//SC = O(1)
	//TC: Best = O(n^2), Avg = O(n^2), Worst = O(n^2)
	//In place
	//Not stable
	selectionSort(arr, 5);
	print(arr);
	return 0;
}
	