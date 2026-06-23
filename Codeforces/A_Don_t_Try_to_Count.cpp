#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        bool flag = true;
        string original, target;
        int s1, s2;
        cin >> s1 >> s2;
        cin >> original >> target;
        int size=s1+s2;
        int count = 0;
        string str = original;
        while (size--)
        {
            if (str.find(target) != string::npos)
            {
                cout << count << endl;
                flag = false;
                break;
            }
            str += str;
            count++;
        }
        if (flag)
        {
            cout << -1 << endl;
        }
    }
}