#include <bits/stdc++.h>
using namespace std;
// Only valid of positive number.
int subarraySum(vector<int> &nums, int k)
{
    int totalSubarray = 0;
    int sum = 0;
    int i = 0;
    int j = 0;
    while (j < nums.size())
    {
        if (j < nums.size())
            sum = sum + nums[j];
        while (sum > k && i <= j)
        {
            sum -= nums[i];
            i++;
        }
        if (sum == k)
            totalSubarray++;
        j++;
    }
    return totalSubarray;
}
int main()
{
    int size;
    cin >> size;
    int sum;
    cin >> sum;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int result = subarraySum(arr, sum);
    cout << result;
}