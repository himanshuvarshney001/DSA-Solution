#include<iostream>
#include<string>
using namespace std;
//bruter force
// bool check(string &s,int i,int j)
// {
//     while(i<j)
//     {
//         if(s[i]!=s[j])
//         return false;
//         i++;
//         j--;
//     }
//     return true;
// }
// int main()
// {
//     string s;
//     cin>>s;
//     int count=0;
//     int i=s.size()-1;
//     while(i>0 && !check(s,0,i))
//     {
//           i--;
//           count++;
//     }
//     cout<<count;
// }
// kmp
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
int minChar(string &s) {
        // code here
    string temp=s;
    reverse(temp.begin(),temp.end());
    s=s+"#"+temp;
    int lps=getLPSLength(s);
    return temp.size()-lps;
}
int main()
{
    string str;
    cin>>str;
    int result=minChar(str);
    cout<<result;
    return 0;
}