#include <bits/stdc++.h>
using namespace std;
int countMonobit(int n)
{
    int count = 0;
    bool flag = false;
    if (n <= 0)
        return 1;
    else if (n <= 1)
        return 2;
    else
    {
        while (n)
        {
            int digit = n % 2;
            if(digit==0)
            {
                flag = true;
            }
            count++;
            n = n / 2;
        }
    }
    if(flag)
    {
        return count;
    }
    return count + 1;
}
int main()
{
    int n;
    cin >> n;
    int result = countMonobit(n);
    cout << result;
    return 0;
}