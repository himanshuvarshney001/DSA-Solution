#include <bits/stdc++.h>
using namespace std;
int countTabs(vector<string> &arr)
{
    // Your Code goes here.
    unordered_map<string, int> um;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (arr[i] != "END")
        {
            um[arr[i]]++;
        }
        else
            break;
    }
    int count = 0;
    for (auto it : um)
    {
        if (it.second % 2 != 0)
            count++;
    }
    return count;
}
int main()
{
    int size;
    cout << "Enter the size of array=";
    cin >> size;
    vector<string> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int res = countTabs(arr);
    cout << res;
}