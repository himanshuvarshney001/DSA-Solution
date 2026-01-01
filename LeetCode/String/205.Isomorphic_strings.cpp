#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
    if (s.size() != t.size())
        return false;
    unordered_map<char, char> um;
    for (int i = 0; i < s.size(); i++)
    {
        if (um.empty())
            um[s[i]] = t[i];
        else if (um.find(s[i]) != um.end())
        {
            if (um[s[i]] != t[i])
                return false;
        }
        else
            um[s[i]] = t[i];
    }
    return true;
}
int main()
{
    string str1, str2;
    cout << "Enter both strings=";
    cin >> str1 >> str2;
    bool result = isIsomorphic(str1, str2);
    cout << boolalpha << result;
    return 0;
}