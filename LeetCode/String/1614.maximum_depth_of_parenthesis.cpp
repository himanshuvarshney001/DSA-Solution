#include <bits/stdc++.h>
using namespace std;
int maxDepth(string s)
{
    int count = 0;
    int maxi = 0;
    for (auto i : s)
    {
        if (i == '(')
            count++;
        else if (i == ')')
            count--;
        maxi = max(count, maxi);
    }
    return maxi;
}
int main()
{
    string str;
    cout<<"Enter expression=";
    cin>>str;
    int result=maxDepth(str);
    cout<<result;
    return 0;
}