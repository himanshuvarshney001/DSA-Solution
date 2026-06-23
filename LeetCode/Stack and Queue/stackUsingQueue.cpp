#include <bits/stdc++.h>
using namespace std;
template <class t>
class Stack
{
public:
    queue<t> que;
    void push(t data)
    {
        int n = 1;
        que.push(data);
        while (n < que.size())
        {
            int element = que.front();
            que.pop();
            que.push(element);
            n++;
        }
    }
    void pop()
    {
        if (que.size() == 0)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            int ele = que.front();
            que.pop();
            cout << "Deleted element is=" << ele << endl;
        }
    }
    void peak()
    {
        if (que.size() == 0)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Top of element=" << que.front() << endl;
        }
    }
};
int main(){
    Stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.peak();

}