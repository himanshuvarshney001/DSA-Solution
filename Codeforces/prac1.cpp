#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y)
{
    for (int i = x; i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
            return i;
    }
    return 1;
}
int main()
{
    int size;
    while (size--)
    {
        float x;
        cin >> x;
        float y = x;
        for (int i = x; i >= 1; i--)
        {
            if (i == (gcd(x, i) / x - 1.0))
            {
                cout << i << endl;
                return 0;
            }
        }
    }
    return 0;
}