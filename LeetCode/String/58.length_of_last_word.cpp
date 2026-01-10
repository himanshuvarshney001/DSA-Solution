#include <bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s)
{
    reverse(s.begin(), s.end());
    bool flag = true;
    int i=0,count=0;
    while(1)
    {
        if(isspace(s[i]))
        i++;
        else
        break;
    }
  
    while(1)
    {
       if(!isspace(s[i]) && i<s.size())
       {
        count++;
       } 
       else
       break;
       i++;
    }
    return count;
}
int main()
{
    string str;
    getline(cin,str);
    int result=lengthOfLastWord(str);
    cout<<result;
    return 0;
}