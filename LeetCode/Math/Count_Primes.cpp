#include <bits/stdc++.h>
using namespace std;
// Brute force
bool prime(int &num)
{
    int count = 0;
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            count++;
    }
    if (count == 0)
        return true;
    else
        return false;
}
int main()
{
    int n,count=0;
    cout << "Entet the size of array";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        bool flag = prime(i);
        if (flag)
            count++;
    }
    cout<<count;
}