#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long num;
    cin >> num;
    long long y = 1;
    while (1)
    {
        if (num - y * y >= 0)
        {
            double x = sqrt(num - y * y);
            long long t = x;
            if (x == t)
            {
                if (x <= 9 * log(10) && y <= 9 * log(10))
                {
                    cout << y << " " << x;
                    break;
                }
                else
                {
                    cout << 0 << " " << 0;
                    break;
                }
            }
            y++;
        }
        else
        {
            cout << 0 << " " << 0;
            break;
        }
    }
    return 0;
}