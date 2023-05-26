#include <bits/stdc++.h>

using namespace std;

void push(stack<int> s1, int x){
    s1.push(x);
}

int pop(stack<int> s1, stack<int> s2){
    if (s1.size() == 0){
        return NULL;
    }
    while (s1.size() > 1){
        int x = s1.top();
        s1.pop();
        s2.push(x);
    }
    int x = s1.top();
    s1.pop();
    while (s2.size() > 0){
        int y = s2.top();
        s2.pop();
        s1.push(y);
    }

    return x;
}

int main(){

    stack<int> s1;
    stack<int> s2;
    
    return 0;
}
