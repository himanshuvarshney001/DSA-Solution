#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    while (size--)
    {
        int arr_size, k;
        bool flag = false;
        cin >> arr_size;
        cin >> k;
        vector<int> arr(arr_size);
        for (int i = 0; i < arr_size; i++)
        {
            cin >> arr[i];
        }
        if (k == 1)
        {
            for (int i = 1; i < arr_size; i++)
            {
                if (arr[i - 1] > arr[i])
                {
                    cout << "NO" << endl;
                    flag = true;
                    break;
                }
            }
            if (!flag)
                cout << "YES" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}