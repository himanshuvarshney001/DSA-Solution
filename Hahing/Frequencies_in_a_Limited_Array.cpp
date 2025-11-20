#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;

    cout << "Enter the size of array=";
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mpp;
    int n = arr.size();
    vector<int> res(n, 0);

    // Count using map
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // Fill result for numbers 1..n
    for (auto it : mpp)
    {
        res[it.first - 1] = it.second; // FIXED!
    }

    for (auto it : res)
        cout << it;
    
}