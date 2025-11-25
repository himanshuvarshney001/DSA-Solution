// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

// Input: nums = [1]
// Output: 1
// Explanation: The subarray [1] has the largest sum 1.

#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &arr)
{
    int sum = 0, max = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
        if (sum > max)
        {
            max = sum;
        }
        if (sum < 0) 
        {
            sum = 0;
        }
    }
    return max;
}
int main()
{
    int size, k;
    cout << "Enter the size of array=";
    cin >> size;
    vector<int> nums(size);
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    int result=maxSubArray(nums);
    cout<<result;
}