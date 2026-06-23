#include <bits/stdc++.h>
using namespace std;
string largestOddNumber(string num)
{
    reverse(num.begin(), num.end());
    int index = -1;
    for (int i = 0; i < num.length(); i++)
    {
        if ((num[i] - '0') % 2 != 0)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
        return "";
    index = (num.length() - index);
    reverse(num.begin(), num.end());
    return num.substr(0, index);
}
int main()
{
    string str;
    cout<<"Enter the string that contains only digits:--";
    cin>>str;
    string result=largestOddNumber(str);
    cout<<result;
    return 0;
}