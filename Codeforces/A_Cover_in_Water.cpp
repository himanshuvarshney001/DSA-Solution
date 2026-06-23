#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size;
        cin >> size;
        string str;
        cin >> str;
        int countDot = 0;
        bool flag = true;
        int consucative = 0;
        int i = 0;
        while(i<size)
        {
            if(str[i]=='.')
            {
                consucative++;
                countDot++;
            }
            else 
            {
                consucative = 0;
            }
            if(consucative>2)
            {
                cout << 2 << endl;
                flag = false;
                break;
            }
            i++;
        }
        if(flag)
            cout << countDot << endl;
    }
}