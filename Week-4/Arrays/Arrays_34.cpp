#include <bits/stdc++.h>

using namespace std;

vector<int> ans (2);

vector<int> tournament (vector<int> arr, int l, int r){
    if (l == r){
        ans[0] = arr[l];
        ans[1] = arr[l];
        return ans;
    }

    if (r - l == 1){
        if (arr[l] > arr[r]){
            ans[0] = arr[r];
            ans[1] = arr[l];
        } else {
            ans[0] = arr[l];
            ans[1] = arr[r];
        }
        return ans;
    }

    int mid = (l + r) / 2;

    vector<int> temp1 = tournament(arr, l, mid);
    vector<int> temp2 = tournament(arr, mid + 1, r);

    if (temp1[0] < temp2[0]){
        ans[0] = temp1[0];
    } else {
        ans[0] = temp2[0];
    }

    if (temp1[1] < temp2[1]){
        ans[1] = temp2[1];
    } else {
        ans[1] = temp1[1];
    }

    return ans;
}

int main(){
    vector<int> arr = { 1000, 11, 445, 1, 330, 3000 };
    int n = arr.size();

    tournament(arr, 0, n - 1);
    cout << ans[0] << " " << ans[1] << endl;
    
    return 0;
}