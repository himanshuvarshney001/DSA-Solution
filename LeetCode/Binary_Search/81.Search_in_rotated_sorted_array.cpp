#include <bits/stdc++.h>
using namespace std;
bool search(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            return true;
        }
        // if left,mid,right are same then
        else if (nums[mid] == nums[left] && nums[mid] == nums[right])
        {
            left++;
            right--;
        }
        // left half will be sorted
        else if (nums[mid] >= nums[left])
        {
            if (nums[mid] >= target && nums[left] <= target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        // Right half will be sorted
        else
        {
            if (nums[mid] <= target && nums[right] >= target)
            {
                left = mid + 1;
            }
            else
            {
                right = right - 1;
            }
        }
    }
    return false;
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
    cout << "Enter number=";
    cin >> k;
    int result = search(arr, k);
    cout << result;
    return 0;
}