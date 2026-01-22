#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    else
        return false;
}
bool halvesAreAlike(string s)
{
    int count1, count2;
    count1 = count2 = 0;
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (isVowel(s[i]))
            count1++;
        if (isVowel(s[s.size() - 1 - i]))
            count2++;
    }
    if (count1 == count2)
        return true;
    else
        return false;
}
int main()
{
    string str;
    cout<<"Enter the string=";
    cin>>str;
    bool result=halvesAreAlike(str);
    cout<<boolalpha<<result;
    return 0;
}