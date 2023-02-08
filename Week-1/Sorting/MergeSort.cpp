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

void merge(vi &arr, int l, int m, int r){
	vi arr1, arr2;
	for (int i = l; i <= m; i++){
		arr1.push_back(arr[i]);
	}
	for (int i = m + 1; i <= r; i++){
		arr2.push_back(arr[i]);
	}
	int ind = l;
	int ptr1 = 0;
	int ptr2 = 0;
	while ((ptr1 < arr1.size()) && (ptr2 < arr2.size())){
		if (arr1[ptr1] > arr2[ptr2]){
			arr[ind] = arr2[ptr2];
			ptr2 ++;
		} else {
			arr[ind] = arr1[ptr1];
			ptr1 ++;
		}
		ind ++;
	}
	while (ptr1 < arr1.size()){
		arr[ind] = arr1[ptr1];
		ind ++;
		ptr1 ++;
	}
	while (ptr2 < arr2.size()){
		arr[ind] = arr2[ptr2];
		ind ++;
		ptr2 ++;
	}
}

void mergeSort(vi &arr, int l, int r){
	if (r <= l){
		return;
	}
	int m = (l + r)/2;
	mergeSort(arr, l, m);
	mergeSort(arr, m + 1, r);
	merge(arr, l, m, r);
}

int main(){
	vi arr = {10, 4, 0, 20, 15};
	//SC = O(n)
	//TC: Best = O(nlogn), Avg = O(nlogn), Worst = O(nlogn)
	//Not in place
	//Stable
	mergeSort(arr, 0, arr.size() - 1);
	print(arr);
	return 0;
}
	