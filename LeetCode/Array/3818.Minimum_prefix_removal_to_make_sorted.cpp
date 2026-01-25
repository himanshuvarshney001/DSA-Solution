#include <bits/stdc++.h>
using namespace std;
int minimumPrefixLength(vector<int> &nums)
{
    int count = 0, i = nums.size() - 1;
    for (i = nums.size() - 1; i > 0; i--)
    {
        if (nums[i] <= nums[i - 1])
            break;
        else
            count++;
    }
    return nums.size() - count - 1;
}
int main()
{
    int size,k;
    cout << "Enter the size of array";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int result = minimumPrefixLength(arr);
    cout << result;
    return 0;
}