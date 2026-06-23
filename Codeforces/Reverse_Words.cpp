#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    str = " " + str + " ";
    string word="";
    string result = "";
    for(char i:str)
    {
        if(i!=' ')
        {
            word += i;
        }
        else if(word.size()>0 && i==' ')
        {
            reverse(word.begin(), word.end());
            result += word;
            result += " ";
            word = "";
        }
    }
    cout << result.substr(0,result.size()-1);
    return 0;
}