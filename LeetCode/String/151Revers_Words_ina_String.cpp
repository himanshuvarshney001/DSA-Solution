#include<bits/stdc++.h>
using namespace std;
//"  hello world  "
string reverse(string &str)
{
    string word="";
    bool flag=false;
    string result="";
    str=" "+str+" ";
    reverse(str.begin(),str.end());//"  dlrow olleh  "
    for(auto i:str)
    {
        if(i!=' ')
        {
            word=i+word;
            flag=true;
        }
        else if(flag)
        {
            result=result+" "+word;
            flag=false;
            word.clear();
        }
    }
    return result.substr(1,result.length()-1);
}
int main()
{
    string str;
    getline(cin,str);
    string result=reverse(str);
    cout<<result;
}