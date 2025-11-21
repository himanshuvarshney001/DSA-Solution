#include <bits/stdc++.h>
using namespace std;
string longestPalindrome(string s)
{
    int i = 0;
    int j=0;
    string temp="", res = "";
    while (i <= s.length() - 1)
    {
        temp = temp + s[j];
        if (temp.length() > res.length())
        {
            string temp1 = temp;
            reverse(temp.begin(), temp.end());
            if (temp == temp1)
            {
                res = temp1;
                j++;
            }
            else
            {
                i++;
            }
        }
    }
}
int main()
{
    string str;
    cout << "Enter ths string = ";
    cin >> str;
    string res = longestPalindrome(str);
}
