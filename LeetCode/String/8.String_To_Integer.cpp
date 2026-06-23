#include <bits/stdc++.h>
using namespace std;
int myAtoi(string &s)
{
    int i = 0;
    int n = s.size();
    char sign = '+';
    string result = "";
    while (i < n && s[i] == ' ')
        i++;
    if (i < n && (s[i] == '+' || s[i] == '-'))
    {
        if (s[i] == '-')
            sign = '-';
        i++;
    }
    if (i < n && !isdigit(s[i]))
        return 0;
    while (i < n && isdigit(s[i]))
    {
        result += s[i];
        i++;
    }
    long long num = 0;
    for (int j = 0; j < result.size(); j++)
    {
        if (sign == '+' && num > INT_MAX)
            return INT_MAX;
        if (sign == '-' && -num < INT_MIN)
            return INT_MIN;
    }
    return (sign == '-') ? -num : num;
}
int main()
{
    string str;
    cout << "Enter string=";
    getline(cin, str);
    int result = myAtoi(str);
    cout << result;
    return 0;
}