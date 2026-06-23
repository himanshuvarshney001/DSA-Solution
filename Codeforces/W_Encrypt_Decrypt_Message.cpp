#include<bits/stdc++.h>
using namespace std;
int main()
{
    string original="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string key="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    unordered_map<char, char> enc, dec;
    for (int i = 0; i < 62;i++)
    {
        enc[original[i]] = key[i];
        dec[key[i]] = original[i];
    }
    int q;
    cin >> q;
    string str;
    cin >> str;
    string result = "";
    for(char ch:str)
    {
        if(q==1)
        {
            result += enc[ch];
        }
        else {
            result += dec[ch];
        }
    }
    cout << result << endl;
}