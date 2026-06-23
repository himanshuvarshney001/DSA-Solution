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
        vector<int> input(size);
        bool flag = true;
        long long sum = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }
        while (true)
        {
            bool changed = false;
            for (int i = 1; i < size - 1; i++)
            {
                if (input[i - 1] < input[i] && input[i] > input[i + 1])
                {
                    swap(input[i], input[i + 1]);
                    changed = true;
                }
            }
            if (!changed)
            {
                break;
            }
        }
        for (int i = 1; i < size; i++)
        {
            if (input[i - 1] > input[i])
            {
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
    }
    return 0;
}