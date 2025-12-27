#include <bits/stdc++.h>
using namespace std;
// (()())(())(()(()))
string removeOuterParentheses(string &s)
{
    int count=0;
    string result="";
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='(')
        {
           if(count>0)
           result=result+'(';
           count++;
        }
        else if(s[i]==')')
        {
            if(count>1)
            {
                result=result+')';
            }
            count--;
        }
    }
    return result;
}
int main()
{
    string str;
    cin >> str;
    string result = removeOuterParentheses(str);
    cout << result;
    return 0;
}