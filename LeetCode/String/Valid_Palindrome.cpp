#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string:-";
    // get input when the next line not incounter.
    getline(cin,str);
    string res="";
    for(char i:str)
    {
        if(isalnum(i))
        {
            //Cause incorrect behavior or unexpected characters (especially with non-ASCII letters)
            res=res + char(tolower(i));
        }
    }
    str=res;
    reverse(res.begin(),res.end());
    // compare method compare both string laxicographacily when both string are same then return 0
    if(str.compare(res)==0)
    cout<<"Valid palindrome";
    else
    cout<<"Not valid palindrome";
}