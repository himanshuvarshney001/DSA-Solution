#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
    unordered_map<char,char> um;
    for(int i=0;i<s.length();i++)
    {
        char ss=s[i];
        char tt=t[i];
        if(um.find(ss)!=um.end())
        {
            if(um[ss]!=tt)
            return false;
        }
        else
        {
           if(um.find(tt)==um.end())
           return false;
           else
           um[ss]=tt;
        }
    }
    return true;
}
int main()
{
    string str1,str2;
    cout<<"Enter first string=";
    cin>>str1;
    cout<<"Enter second string=";
    cin>>str2;
    bool result=isIsomorphic(str1,str2);
    cout<<boolalpha<<result;
    return 0;
}