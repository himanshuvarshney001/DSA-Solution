#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int element;
        cin >> element;
        if(isPrime(element))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}