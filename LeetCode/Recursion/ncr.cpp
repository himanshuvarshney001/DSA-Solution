#include <iostream>
using namespace std;

long long nCr(int n, int r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;

    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main()
{
    int n, r;
    cin >> n >> r;

    cout << nCr(n, r);

    return 0;
}           