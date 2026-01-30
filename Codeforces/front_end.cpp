#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    vector<int> result;   // ❌ removed size initialization

    for (int i = 0; i < size / 2; i++)
    {
        result.push_back(arr[i]);
        result.push_back(arr[size - i - 1]);
    }

    // ✅ handle middle element if size is odd
    if (size % 2 != 0)
    {
        result.push_back(arr[size / 2]);
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
