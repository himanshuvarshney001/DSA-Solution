#include<iostream>
#include<vector>
using namespace std;
int getLPSLength(string &s) {
    // code here
    vector<int>lps(s.size(),0);
    int pre=0;
    int suf=1;
    while(suf<s.size())
    {
        // match
        if(s[pre]==s[suf])
        {
            lps[suf]=pre+1;
            suf++;
            pre++;
        }
        else{
            if(pre==0)
            {
                lps[suf]=0;
                suf++;
            }
            else pre=lps[pre-1];
        }
    }
    return lps[s.size()-1];
}
int main()
{
    string str;
    cin>>str;
    int result=getLPSLength(str);
    cout<<result;
    return 0;
}