#include <iostream>
#include <stack>
using namespace std;

// function to insert element at the bottom of the stack
void insertAtBottom(stack<int> &st, int x) {
    
    if (st.empty()) {
        st.push(x);
        return;
    }

    // hold the top element and remove it
    int top = st.top();
    st.pop();

    // recursively call to reach the bottom
    insertAtBottom(st, x);

    st.push(top);
}

// function to reverse the stack
void reverseStack(stack<int> &st) {
    
    if (st.empty()) return;

    // hold the top element and remove it
    int top = st.top();
    st.pop();

    // reverse the remaining stack
    reverseStack(st);

    // insert the held element at the bottom
    insertAtBottom(st, top);
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverseStack(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}