#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int startingIndex = str.find('?');
    str = str.substr(startingIndex + 1);
    for (int i = 0; i < str.size();)
    {
        string key = "";
        string value="";
        while(i<str.size() && str[i]!='=')
        {
            key += str[i++];
        }
        i++;
        while(i<str.size() && str[i]!='&')
        {
            value += str[i++];
        }
        i++;
        cout << key << ": " << value<<endl;
    }
    return 0;
}