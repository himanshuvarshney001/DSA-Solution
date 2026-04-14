#include <bits/stdc++.h>
using namespace std;
long long maximumSubarraySum(vector<int> &nums, int k)
{
    if (nums.size() < k)
        return -1;
    long long result = 0;
    for (int i = 0; i < k; i++)
    {
        result += nums[i];
    }
    long long subarray_sum = result;
    for (int i = 0; i < nums.size() - k; i++)
    {
        subarray_sum = subarray_sum - nums[i] + nums[i + k];
        result = max(result, subarray_sum);
    }
    return result;
}
int main()
{
    int size, k;
    cout << "Enter the size of array=";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the subarray size=";
    cin >> k;
    cout << "Enter the element of the array=";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    long long result = maximumSubarraySum(arr, k);
    cout << result;
    return 0;
}