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
class Queue{
    public:
        int count;
        node<t>*start;
        node<t> *end;
        Queue()
        {
            count = 0;
            start = NULL;
            end = NULL;
        }
        void push(t data)
        {
            node<t> *temp = new node<t>(data);
            if(start==NULL)
                start = end = temp;
            else{
                end->next = temp;
                end = temp;
            }
            count++;
        }
        void pop()
        {
            if(start==NULL)
            {
                cout << "Queue is empty" << endl;
                return;
            }
            node<t> *temp = start;
            start = start->next;
            delete temp;
            count--;
        }
        bool empty()
        {
            if(start==NULL)
            {
                return true;
            }
            else
                return false;
        }
        int size() {
            return count;
        }
        void display()
        {
            node<t> *temp = start;
            while(temp!=NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};
int main()
{
    Queue<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << st.size()<<endl;
    st.display();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.size() << endl;
    cout << st.empty() << endl;
    return 0;
}