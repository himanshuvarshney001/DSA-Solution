#include <bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int> &nums)
{
    int low = 1;
    int high = nums.size() - 2;
    if (nums.size() == 1)
        return nums[0];
    else if (nums[0] != nums[1])
        return nums[0];
    else if (nums[nums.size() - 1] != nums[nums.size() - 2])
        return nums[nums.size() - 1];
    else
    {
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
                return nums[mid];
            else if ((mid % 2 == 1 && nums[mid - 1] == nums[mid]) || (mid%2==0 && nums[mid+1]==nums[mid]))
                low = mid + 1;
            else
                high = mid - 1;
        }
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
    int result = singleNonDuplicate(arr);
    cout << result;
    return 0;
}