#include <bits/stdc++.h>
using namespace std;
string reversePrefix(string s, int k)
{
    for (int i = 0; i < k / 2; i++)
    {
        int temp = s[i];
        s[i] = s[k - 1 - i];
        s[k - 1 - i] = temp;
    }
    return s;
}
int main()
{
    string str;
    cin>>str;
    int k;
    cin>>k;
    string result=reversePrefix(str,k);
    cout<<result;
    return 0;
}