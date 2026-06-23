#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<char, int> um;
    um['e'] = 0;
    um['g']=0;
    um['y'] = 0;
    um['p'] = 0;
    um['t']=0;
    string str;
    getline(cin, str);
    int mini = INT_MAX;
    for(char ch:str)
    {
        ch = tolower(ch);
        if(um.find(ch)!=um.end())
            um[ch]++;
    }
    for (auto it = um.begin(); it != um.end();it++)
    {
        mini = min(mini, it->second);
    }
    cout << mini;
}