#include <bits/stdc++.h>
using namespace std;
bool rotateString(string s, string goal)
{
    if (s.length() != goal.length())
        return false;
    if(s==goal)
    return true;    
    int count = s.length() ;

    for(int i=0;i<s.length();i++)
    {
        char temp=s[0];
        for(int j=0;j<s.length()-1;j++)
        {
            s[j]=s[j+1];
        } 
        s[s.length()-1]=temp;
        if(s==goal)
        return true;
    }
    return false;
}
int main()
{
    string str,goal;
    cout<<"Enter both string first s then goal=";
    cin>>str>>goal;
    bool result=rotateString(str,goal);
    cout<<boolalpha<<result;
}