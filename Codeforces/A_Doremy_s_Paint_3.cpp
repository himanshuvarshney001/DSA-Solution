#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size;
        cin >> size;
        int n = size;
        map<int, int> um;
        while (size--)
        {
            int element;
            cin >> element;
            um[element]++;
        }
        if (size == 2 || um.size() == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        else if (um.size() >= 3)
        {
            cout << "NO" << endl;
            continue;
        }
        else if (um.size() == 2)
        {
            int freq1 = um.begin()->second;
            int freq2 = um.rbegin()->second;
            if (freq1 == freq2)
                cout << "YES" << endl;
            else if (n % 2 == 1 && abs(freq1 - freq2) == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}