#include<iostream>
#include<vector>
using namespace std;
string reverseWords(string &s) {
    // code here
    reverse(s.begin(),s.end());
    int i=0;
    int l=0;
    int r=0;
    int n=s.size();
    while(i<n)
    {
        while(i<n && s[i]=='.')
        i++;
        if(i==n)
        break;
        if(l!=0)
        s[l++]='.';
        r=l;
        while(i<n && s[i]!='.')
        s[l++]=s[i++];
        reverse(s.begin()+r,s.begin()+l);
    }
    s.resize(l);
    return s;
}
int main()
{
    string str="i.like.this.program.very.much"
    string result=reverseWords(str);
    cout<<result;
    return 0;
}