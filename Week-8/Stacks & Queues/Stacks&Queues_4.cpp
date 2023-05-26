#include <bits/stdc++.h>

using namespace std;

void push(stack<pair<int, int>> s, int x){
    if (s.size() == 0){
        s.push({x, x});
    } else {
        pair<int, int> t = s.top();
        s.push({x, min(x, t.second)});
    }
}

int pop(stack<pair<int, int>> s){
    if (s.size() == 0){
        return NULL;
    } else {
        pair<int, int> t = s.top();
        s.pop();
        return t.first;
    }
}

int getMin(stack<pair<int, int>> s){
    if (s.size() == 0){
        return NULL;
    } else {
        pair<int, int> t = s.top();
        return t.second;
    }
}

int main(){

    stack<pair<int, int>> s;

    return 0;
}