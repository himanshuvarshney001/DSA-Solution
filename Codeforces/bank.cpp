#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    string str;
    cin>>str;
    int count=1;
    int maxi=INT_MIN;
    for(int i=1;i<str.length()+1;i++)
    {
        if(i<str.length() && str[i]!=str[i-1])
        {
            count++;
        }
        else
        {
            maxi=max(count,maxi);
            count=1;
        }
    }
    cout<<maxi;
    return 0;
}