#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int> &nums)
{
    int low = 0;
    int high = nums.size() - 1;
    int index;
    int mini = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // left half will be sorted
        if (nums[low] <= nums[mid])
        {
            if (mini > nums[low])
            {
                index = low;
                mini = nums[low];
            }
            low = mid + 1;
        }
        // Right half will be sorted
        else
        {
            if (mini > nums[mid])
            {
                mini = nums[mid];
                index = mid;
            }
            high = mid - 1;
        }
    }
    return index;
}
int main()
{
    int size, k;
    cout << "Enter size of array=";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int result = findMin(arr);
    cout << result;
    return 0;
}