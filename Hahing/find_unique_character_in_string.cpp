#include <bits/stdc++.h>
using namespace std;
int firstUniqChar(string s)
{
    unordered_map<char, int> um;
    for (int i = 0; i < s.size(); i++)
    {
        um[s[i]]++;
    }
    int t=-1;
    for (int i = 0; i < s.size(); i++)
    {
        if (um[s[i]] == 1)
        {
            t = i;
            break;
        }
    }
    if (t <= s.size())
        return t;
    else
        return -1;
}
int main()
{
    string str;
    cout << "Enter string =";
    cin >> str;
    int res = firstUniqChar(str);
    cout << res;
}