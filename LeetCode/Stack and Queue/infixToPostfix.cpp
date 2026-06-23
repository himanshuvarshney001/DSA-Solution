#include <bits/stdc++.h>
using namespace std;
string infixPostfix(string exp)
{
    string infix = "";
		stack<char> st;
		for (char i : exp)
			{
			if (i == '+' || i == '-' || i == '*' || i == '/' || i == '^' || i == '(' || i == ')')
				{
				if (i == '+' || i == '-')
					{
					while(!st.empty() && (st.top() == '-' || st.top() == '*' || st.top() == '/' || st.top() == '^' || st.top() == '+'))
						{
						char ele = st.top();
						st.pop();
						infix += ele;
					}
					st.push(i);
				}
				else if (i == '*' || i == '/')
					{
					while(!st.empty() && (st.top() == '*' || st.top() == '/' || st.top() == '^'))
						{
						char ele = st.top();
						st.pop();
						infix += ele;
					}
					st.push(i);
				}
				else if (i == ')')
					{
					while (!st.empty() && st.top() != '(')
						{
						char ele = st.top();
						st.pop();
						infix += ele;
					}
					st.pop();
				}
				else if (i == '(') {
					st.push(i);
				}
				else if(i=='^')
				st.push(i);
			}
			else
				infix += i;
		}
		while (!st.empty())
			{
			infix += st.top();
			st.pop();
		}
		return infix;
}
int main()
{
    string str;
    cout << "Enter expression=";
    cin >> str;
    string result = infixPostfix(str);
    cout << result;
    return 0;
}
