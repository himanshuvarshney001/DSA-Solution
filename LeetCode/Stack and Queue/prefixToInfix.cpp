#include<bits/stdc++.h>
using namespace std;
string prefixToInfix(string exp)
{
    reverse(exp.begin(), exp.end());
  
    stack<string> st;
    for(char i:exp)
    {
        if(i=='*' || i=='/' || i=='-' || i=='+' || i=='%' || i=='^')
        {
            string temp = "("+st.top()+i;
            st.pop();
            temp += st.top() + ")";
            st.pop();
            st.push(temp);
        }
        else
            st.push(string(1,i));
    }
    return st.top();
}
int main()
{
    string exp;
    cin >> exp;
    string result = prefixToInfix(exp);
    cout<<result<<endl;
    return 0;
}