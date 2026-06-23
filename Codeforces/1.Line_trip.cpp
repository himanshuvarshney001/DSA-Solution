#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size, x;
        cin >> size >> x;
        int var;
        int result = 0;
        int prev = 0;
        while (size--)
        {
            cin >> var;
            result = min(result, prev - var);
            prev = var;
        }
        result = min(result, 2 * (prev-x));
        cout << -result<<endl;
    }
}