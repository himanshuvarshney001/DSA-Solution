#include <bits/stdc++.h>
using namespace std;
// brute forces
int findPeakElement1(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if ((i == 0 || nums[i - 1] < nums[i]) && (i == nums.size() - 1 || nums[i] > nums[i + 1]))
            return i;
    }
    return -1;
}
int findPeakElement(vector<int> &nums)
{
    int low = 0;
    int high = nums.size() - 1;
    if (nums.size() == 1)
        return nums[0];
    if(nums[0]>nums[1])
        return 0;
    if(nums[high]>nums[high-1])
        return high;
    low = 1;
    high = high - 1;
    while(left<=right)
    {
        int mid = low + (high - low) / 2;
        if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1])
            return mid;
        else if(nums[mid]>nums[mid-1])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
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
    int result = findPeakElement(arr);
    cout << result;
    return 0;
}