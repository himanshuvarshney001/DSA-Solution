#include <bits/stdc++.h>
using namespace std;
template<class t>
class Queue
{
public:
    stack<t> st1;
    stack<t> st2;
    void push(t data)
    {
        st1.push(data);
    }
    void pop()
    {
        if (st1.empty())
        {
            cout << "Stack is empyt" << endl;
            return;
        }
        else
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
            cout << "Deleted item is " << st2.top() << endl;
            st2.pop();
            while (!st2.empty())
            {
                st1.push(st2.top());
                st2.pop();
            }
        }
    }
    void empty()
    {
        if (st1.empty())
            cout << "Stack is empty" << endl;
    }
    void front()
};
int main()
{
    Queue<float> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.pop();
    q.pop();
    q.empty();
    return 0;
}