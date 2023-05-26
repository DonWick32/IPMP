#include <bits/stdc++.h>

using namespace std;

void push(queue<int> q1, int x){
    q1.push(x);
}

int pop(queue<int> q1, queue<int> q2){
    if (q1.size() == 0){
        return NULL;
    }
    while (q1.size() > 1){
        int x = q1.front();
        q1.pop();
        q2.push(x);
    }
    int x = q1.front();
    q1.pop();
    while(q2.size() > 0){
        int y = q2.front();
        q2.pop();
        q1.push(x);
    }
    return x;
}

int main(){

    queue<int> q1;
    queue<int> q2;

    return 0;
}
