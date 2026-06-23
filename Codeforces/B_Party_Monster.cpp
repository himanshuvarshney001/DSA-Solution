#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int size;
        cin >> size;
        string str;
        cin >> str;
        int right = 0;
        int left = 0;
        for(char ch:str)
        {
            if(ch=='(')
            {
                left++;
            }
            else
                right++;
        }
        if(right==left)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}