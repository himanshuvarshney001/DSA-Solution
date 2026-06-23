#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &arr)
{
    int sizes, pivot = 0, pivot_pos = -1, ans = INT_MAX, pos;
    sizes = arr.size();
    for (int i = sizes - 1; i > 0; i--)
    {
        if (arr[i] > arr[i - 1])
        {
            pivot = arr[i - 1];
            pivot_pos = i - 1;
            break;
        }
    }
    if (pivot_pos == -1)
        reverse(arr.begin(), arr.end());
    else
    {
        for (int i = pivot_pos; i < sizes; i++)
        {
            if (pivot < arr[i] && ans > arr[i])
            {
                ans = arr[i];
                pos = i;
            }
        }
        int temp = arr[pos];
        arr[pos] = arr[pivot_pos];
        arr[pivot_pos] = temp;
        sort(arr.begin() + (pivot_pos + 1), arr.end());
    }
}

int main()
{
    int n;
    cin >> n; // size of array

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    nextPermutation(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
