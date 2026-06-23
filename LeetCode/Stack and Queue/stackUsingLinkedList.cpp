#include<bits/stdc++.h>
using namespace std;
template<class t>
class node{
    public:
        t data;
        node *next;
        node(){
            next = NULL;
        }
        node(t data)
        {
            this->data = data;
            next = NULL;
        }
};
template<class t>
class Stack{
    public:
        int count;
        node<t>*top;
        Stack()
        {
            count = 0;
            top = NULL;
        }
        void push(t data)
        {
            node<t> *temp = new node<t>(data);
            temp->next = top;
            top = temp;
            count++;
        }
        void pop()
        {
            if(top==NULL)
            {
                cout << "Stack is empty" << endl;
                return;
            }
            node<t> *temp = top;
            top = top->next;
            delete temp;
            count--;
        }
        bool empty()
        {
            if(top==NULL)
            {
                return true;
            }
            else
                return false;
        }
        int size() {
            return count;
        }
        void peak()
        {
            if(top==NULL)
            {
                cout << "Stack is empty" << endl;
                return;
            }
            else
                cout << top->data << endl;
        }
};
int main()
{
    Stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.size()<<endl;
    st.peak();
    st.pop();
    st.peak();
    st.pop();
    st.pop();
    st.pop();
    cout << st.size() << endl;
    cout << st.empty() << endl;
    st.peak();
    return 0;
}