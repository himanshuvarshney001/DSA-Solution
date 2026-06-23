#include <bits/stdc++.h>
using namespace std;
void rev(int n)
{
    if (n == 0)
        return;
    cout << n % 10;
    rev(n / 10);
}
int main()
{
    rev(123);
    return 0;
}