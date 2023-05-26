#include <bits/stdc++.h>

using namespace std;

void push1 (vector<int> arr, int top1, int x, int n){
    if (top1 == n){
        cout << "Stack 1 is full." << endl;
    } else {
        arr[top1] = x;
        top1 ++;
    }
}
void push2 (vector<int> arr, int top2, int x, int n){
    if (top2 == 2*n){
        cout << "Stack 2 is full." << endl;
    } else {
        arr[top2] = x;
        top2 ++;
    }
}
int pop1 (vector<int> arr, int top1, int n){
    if (top1 == 0){
        cout << "Stack 1 is empty." << endl;
        return NULL;
    } else {
        int x = arr[top1];
        top1--;
        return x;
    }
}
int pop2 (vector<int> arr, int top2, int n){
    if (top2 == n){
        cout << "Stack 2 is empty." << endl;
        return NULL;
    } else {
        int x = arr[top2];
        top2--;
        return x;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr (2 * n);
    int top1 = 0, top2 = n;
    return 0;
}