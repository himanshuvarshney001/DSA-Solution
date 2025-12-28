#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
    if(s.size()!=t.size())
    return false;
    unordered_map<char,int>us;
    unordered_map<char,int>ut;
    for(int i=0;i<s.size();i++)
    {
        us[s[i]]++;
        ut[t[i]]++;
    }
    for(auto it:us)
    {
        if(it.second!=us[it.first])
        return false;
    }
    return true;
}
int main()
{
    string str1,str2;
    cout<<"Enter the first string=";
    cin>>str1;
    cout<<"Enter the second string=";
    cin>>str2;
    bool result=isAnagram(str1,str2);
    cout<<boolalpha<<result;
    return 0;
}