#include <bits/stdc++.h>
using namespace std;
void odd_number(int n)
{
    if (n < 1)
        return;
    if (n % 2 == 0)
        n--;
    odd_number(n - 2);
    cout << n << " ";
}
int main()
{
    odd_number(6);
    return 0;
}
