#include <bits/stdc++.h>
using namespace std;
string postfixToInfix(string exp)
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
            st.push("(" + op2 + i + op1 + ")");
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
    string result = postfixToInfix(exp);
    cout << result << endl;
    return 0;
}