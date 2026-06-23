#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> minimumAbsDifference(vector<int> &arr)
{
    vector<vector<int>> result;

    // Step 1: Sort the array
    sort(arr.begin(), arr.end());

    // Step 2: Find minimum absolute difference
    int mini = INT_MAX;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int diff = abs(arr[i] - arr[i + 1]);
        mini = min(mini, diff);
    }

    // Step 3: Store all pairs with minimum difference
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (abs(arr[i] - arr[i + 1]) == mini)
        {
            result.push_back({arr[i], arr[i + 1]});
        }
    }

    return result;
}

int main()
{
    vector<int> arr = {4, 2, 1, 3};

    vector<vector<int>> ans = minimumAbsDifference(arr);

    // Print result
    for (auto &pair : ans)
    {
        cout << pair[0] << " " << pair[1] << endl;
    }
    return 0;
}
