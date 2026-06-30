#include <iostream>
using namespace std;

long long Log2(long long n)
{
    if (n == 1)
        return 0;

    return 1 + Log2(n / 2);
}

int main()
{
    long long n;
    cin >> n;

    cout << Log2(n);
}