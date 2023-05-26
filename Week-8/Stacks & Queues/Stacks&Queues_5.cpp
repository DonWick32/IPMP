#include <bits/stdc++.h>
using namespace std;

class myStack {
	stack<int> st;
	deque<int> dq;

public:
    
	void add(int data){
		dq.push_back(data);
        if (dq.size() > st.size() + 1){
            int x = dq.front();
            dq.pop_front();
            st.push(x);
        }
	}

	void pop(){
        dq.pop_back();
        if (dq.size() < st.size()){
            int x = st.top();
            st.pop();
            dq.push_front(x);
        }
	}

	int getMiddleElement() {
	    return dq.front();
	}

	void deleteMiddleElement(){
		dq.pop_front();
        if (dq.size() < st.size()){
            int x = st.top();
            st.pop();
            dq.push_front(x);
        }
	}
};

int main()
{
	myStack st;
	st.add(2);
	st.add(5);
	cout << "Middle Element: " << st.getMiddleElement() << endl;
	st.add(3);
	st.add(7);
	st.add(4);
	cout << "Middle Element: " << st.getMiddleElement() << endl;
	st.deleteMiddleElement();
	cout << "Middle Element: " << st.getMiddleElement() << endl;
	st.deleteMiddleElement();
	cout << "Middle Element: " << st.getMiddleElement() << endl;
	st.pop();
	st.pop();
	st.deleteMiddleElement();
}