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

int partition(vi &arr, int l, int r){

	int piv = arr[l];
	int pivInd = l;
	for (int i = l + 1; i <= r; i++){
		if (arr[i] <= piv){
			pivInd ++;
		}
	}
	swap(arr[l], arr[pivInd]);
	int i = l, j = r;

	while (i < pivInd && j > pivInd){
		while (arr[i] <= piv){
			i++;
		}
		while (arr[j] > piv){
			j--;
		}
		if (i < pivInd && j > pivInd){
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}
	return pivInd;
}

void quickSort(vi &arr, int l, int r){
	if (l >= r){
		return;
	}
	int piv = partition(arr, l, r);
	quickSort(arr, l, piv - 1);
	quickSort(arr, piv + 1, r);
}

int main(){
	vi arr = {10, 4, 0, 20, 15};
	//SC = O(1)
	//TC: Best (middle partition) = O(nlogn), Avg = O(nlogn), Worst (end partition) = O(n^2)
	//In place
	//Not stable
	quickSort(arr, 0, arr.size() - 1);
	print(arr);
	return 0;
}
	