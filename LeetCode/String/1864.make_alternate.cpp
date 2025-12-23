#include <bits/stdc++.h>
using namespace std;
int minSwaps(string s)
{
    int ones = 0;
    int zeros=0;
    string result="";
    for(auto i:s)
    {
        if(i=='0')
        zeros++;
        else
        ones++;
    }
    int j=s.length();
    if(max(ones,zeros)-min(ones,zeros)>1)
    {
        return -1;
    }
    if(ones>=zeros)
    {
        char ch='1';
        while(j)
        {
            result=result+ch;
            if(ch=='1')
            ch='0';
            else
            ch='1';
            j--;
        }
    }
    else
    {
        char ch='0';
        while(j)
        {
            result=result+ch;
            if(ch=='1')
            ch='0';
            else
            ch='1';
            j--;
        }
    }
    cout<<result<<endl;
    j=s.length();
    int i=0;
    int count=0;

    while(j)
    {
        if(result[i]!=s[i])
        count++;
        i++;
        j--;
    }
    reverse(result.begin(),result.end());
    int count1=0;
    j=s.length(),i=0;
    while(j)
    {
        if(result[i]!=s[i])
        count1++;
        i++;
        j--;
    }
    return min(count,count1)/2;
}
int main()
{
    string str;
    cout<<"Enter the string that contains only 0 and 1:-)";
    cin>>str;
    int result=minSwaps(str);
    cout<<result;
    return 0;
}