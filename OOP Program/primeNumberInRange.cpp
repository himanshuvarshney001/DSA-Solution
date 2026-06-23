#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<bool> arr(101, true);
    arr[0] = false;
    arr[1] = false;
    for (int i = 2; i * i <= 101; i++)
    {
        if (arr[i])
        {
            for (int j = i * i; j < 101; j += i)
            {
                arr[j] = false;
            }
        }
    }
    cout << "Primes=" << endl;
    for (int i = 0; i < 101;i++)
    {
        if(arr[i])
            cout << i << endl;
    }
    return 0;
}