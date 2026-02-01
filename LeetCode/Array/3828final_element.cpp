#include <bits/stdc++.h>
using namespace std;

int finalElement(vector<int> &nums)
{
    return max(nums[0], nums[nums.size() - 1]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << finalElement(nums) << '\n';

    return 0;
}
