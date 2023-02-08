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

void heapify(vi &arr, int n, int root){
	int maxInd = root;
	int l = 2 * root + 1;
	int r = 2 * root + 2;
	if (l < n && arr[l] > arr[maxInd]){
		maxInd = l;
	}
	if (r < n && arr[r] > arr[maxInd]){
		maxInd = r;
	}
	if (maxInd != root){
		swap(arr[root], arr[maxInd]);
		heapify(arr, n, maxInd);
	}
}

void heapSort(vi &arr, int n){
	for (int i = n/2 - 1; i >= 0; i--){
		heapify(arr, n, i);
	}
	for (int i = n - 1; i > 0; i--){
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}

int main(){
	vi arr = {10, 4, 0, 20, 15, -5};
	//SC = O(1)
	//TC: Best = O(nlogn), Avg = O(nlogn), Worst = O(n^2)
	//In place
	//Not stable
	heapSort(arr, arr.size());
	print(arr);
	return 0;
}
	