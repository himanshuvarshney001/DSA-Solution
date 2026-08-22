#include<iostream>
#include<vector>
// #include<stack>
using namespace std;
void insert(int top,stack<int> &st)
{
    if(st.empty() || st.top()>=top)
    {
        st.push(top);
        return;
    }
    int ele=st.top();
    st.pop();
    insert(top,st);
    st.push(ele);
}
void sort(stack<int> &st)
{
   if(st.empty() || st.size()==1)
   return;
   int top=st.top();
   st.pop();
   sort(st);
   insert(top,st);
}
int main()
{
    stack<int> st;
    st.push(41);
    st.push(3);
    st.push(32);
    st.push(2);
    st.push(11);
    sort(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}