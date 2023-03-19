// C++ program to find length of
// the longest bitonic subarray
#include <bits/stdc++.h>
using namespace std;

int bitonic(vector<int> arr, int n)
{
	vector <int> inc (n, 1);
	vector <int> dec (n, 1);

    for (int i = 0; i < n - 1; i++){
        if (arr[i + 1] >= arr[i]){
            inc[i + 1] = inc[i] + 1;
        }
    }

	for (int i = n - 2; i >= 0; i--){
        if (arr[i + 1] <= arr[i]){
            dec[i] = dec[i + 1] + 1;
        }
    }

	int maxi = inc[0] + dec[0] - 1;
	for (int i = 1; i < n; i++){
		if (inc[i] + dec[i] - 1 > maxi){
			maxi = inc[i] + dec[i] - 1;
        }
    }

	return maxi;
}

int main()
{
	vector<int> arr = {12, 4, 78, 90, 45, 23};
	int n = arr.size();
	cout << bitonic(arr, n);
	return 0;
}

