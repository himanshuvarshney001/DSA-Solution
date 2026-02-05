#include <bits/stdc++.h>
using namespace std;

int minimumCost(vector<int> &nums)
{
    if (nums.size() == 3)
        return nums[0] + nums[1] + nums[2];
    int min1 = INT_MAX, min2 = INT_MAX;
    for (int i = 1; i < nums.size(); i++)
    {
        if (min1 > nums[i])
        {
            min2 = min1;
            min1 = nums[i];
        }
        else if (min1 <= nums[i] && min2 > nums[i])
        {
            min2 = nums[i];
        }
    }
    return nums[0] + min1 + min2;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << minimumCost(nums);
    return 0;
}
