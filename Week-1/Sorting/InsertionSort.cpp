#include <bits/stdc++.h>
using namespace std;

#define print(a) for(auto x : a) {cout << x << " ";} cout << endl;

typedef long long lli;
typedef vector<int> vi;
typedef vector<lli> vl;

void insertionSort(vi &arr, int n){
	for (int i = 0; i < n; i++){
		int j =  i - 1;
		int temp = arr[i];
		while (j >= 0 && arr[j] > temp){
			arr[j+1] = arr[j];
			j --;
		}
		arr[j+1] = temp;
	}
}

int main(){
	vi arr = {10, 4, 0, 20, 15};
	//SC = O(1)
	//TC: Best (sorted) = O(n), Avg = O(n^2), Worst (reverse sorted) = O(n^2)
	//In place
	//Stable
	insertionSort(arr, 5);
	print(arr);
	return 0;
}
	