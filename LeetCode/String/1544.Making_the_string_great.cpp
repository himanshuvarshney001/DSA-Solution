#include <bits/stdc++.h>
using namespace std;
// Input: s = "leEeetcode"
// Output: "leetcode"

// Input: s = "abBAcC"
// Output: ""
string makeGood(string s)
{
    string result = string(1, s[0]);
    int j = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (j >= 0&&abs(result[j] - s[i]) == 32 )
        {
            result.pop_back();
            j--;
        }
        else
        {
            result.push_back(s[i]);
            j++;
        }
    }
    return result.empty() ? "" : result;
}
int main()
{
    string str;
    cout << "Enter a string=";
    cin >> str;
    string result = makeGood(str);
    cout << result;
}