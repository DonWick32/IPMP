#include <bits/stdc++.h>
using namespace std;

int minAbsSumPair(int arr[], int n)
{		
    sort(arr, arr + n);
	int mini = INT_MAX;
    int l = 0, r = n - 1;
    int a = arr[l];
    int b = arr[r];

    while (l < r){
        int sum = arr[l] + arr[r];
        if (abs(sum) < mini){
            mini = sum;
            a = arr[l];
            b = arr[r];
        }
        if (sum == 0){
            mini = 0;
            break;
        } else if (sum > 0){
            r --;
        } else {
            l ++;
        }
    }
    cout << a << " " << b << endl;
    return mini;
}

int main()
{
    // -80, -10, 1, 60, 70, 85
	int arr[] = {1, 60, -10, 70, -80, 85};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << minAbsSumPair(arr, n);
	return 0;
}