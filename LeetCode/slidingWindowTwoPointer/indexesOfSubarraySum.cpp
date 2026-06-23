#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySum(vector<int> &arr, int target)
{
    int prefixSum = 0;
    unordered_map<int, int> um;
    um[0] = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        prefixSum += arr[i];
        if (um.find(prefixSum - target) != um.end())
        {
            return {um[prefixSum - target] + 1 + 1, i + 1};
        }
        if (um.find(prefixSum) == um.end())
            um[prefixSum] = i;
    }
    return {-1};
}

int main()
{
    int n, target;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> target;

    vector<int> ans = subarraySum(arr, target);

    // Handle output safely based on your return type
    if (ans.size() == 1 && ans[0] == -1)
    {
        cout << "No subarray found\n";
    }
    else
    {
        cout << ans[0] << " " << ans[1] << endl;
    }

    return 0;
}