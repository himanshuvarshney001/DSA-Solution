#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,word="";
    cout<<"Enter the string=";
    getline(cin,s);
     int n=s.length();
       string res="";
       reverse(s.begin(),s.end());
       for(int i=0;i<n;i++)
       {
        string word="";
        while(i<n && s[i]!=' ')
        {
            
            word=word+s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0)
        res=res+" "+word;
       }
       cout<<res.substr(1);
    
}