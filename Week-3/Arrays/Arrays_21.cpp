#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n)
{
    int leftSum = 0;
	int rightSum = 0;
    for (int i = 1; i < n; i++){
        rightSum += arr[i];
    }
    for (int i = 1; i < n; i++){
        rightSum -= arr[i];
        leftSum += arr[i - 1];
        if (leftSum == rightSum){
            return i;
        }
    }
    return -1;
}

int main()
{
	int arr[] = { 2, 3, 4, 1, 4, 5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << findElement(arr, size);
	return 0;
}
