#include <bits/stdc++.h>
using namespace std;
string prePost(string exp)
{
    stack<string> st;
    for (char i : exp)
    {
        if (i == '*' || i == '/' || i == '-' || i == '+' || i == '%' || i == '^')
        {
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            st.push(i + op2 + op1);
        }
        else
            st.push(string(1, i));
    }
    return st.top();
}
int main()
{
    string exp;
    cin >> exp;
    string result = prePost(exp);
    cout << result << endl;
    return 0;
}
