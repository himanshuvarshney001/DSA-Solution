#include <bits/stdc++.h>
using namespace std;
string orderlyQueue(string s, int k)
{
    int size = s.size();
    string str = s;
    if (k == 1)
    {
        while (size--)
        {
            s = s.substr(k) + s[0];
            str = min(str, s);
        }
        return str;
    }
    else
        sort(s.begin(), s.end());
    return s;
}
int main()
{
    string str;
    int k;
    cout << "Enter the string = ";
    cin >> str;
    cout << "Enter the value of k";
    cin >> k;
    string result = orderlyQueue(str, k);
    cout << result;
    return 0;
}