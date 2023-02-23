// C++ program to find if
// there is a zero sum subarray

#include <bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n)
{
	map <int, int> m;
    int prefixSum = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == 0){
            return true;
        }
        prefixSum += arr[i];
        m[prefixSum] += 1;
    }
    for (auto it = m.begin(); it != m.end(); it++){
        if (it -> second > 1){
            return true;
        }
    }
	return false;
}

// Driver's code
int main()
{
	int arr[] = {4, 2, -3, 1, 6};
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	if (subArrayExists(arr, N))
		cout << "Found a subarray with 0 sum";
	else
		cout << "No Such Sub Array Exists!";
	return 0;
}
