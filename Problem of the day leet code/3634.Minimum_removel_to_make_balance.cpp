#include <bits/stdc++.h>
using namespace std;

int minRemoval(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    int ans = INT_MAX;
    int j = 0, i = 0;
    while (j < nums.size())
    {
        if (i < nums.size() && (long long)nums[j] * k >= nums[i])
        {
            ans = min(ans, int(nums.size() - (i - j + 1)));
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}
int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << minRemoval(nums, k) << endl;

    return 0;
}
