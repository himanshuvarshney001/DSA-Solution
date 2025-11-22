#include <bits/stdc++.h>
using namespace std;
int minimumOperations(vector<int> &nums)
{
    int count, mini, sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 3 == 0)
            count++;
        else
            break;
    }
    if (count == nums.size())
        return 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 3 != 0)
        {
            mini = min(nums[i] % 3, 3 - (nums[i] % 3)); //main logic
            sum = sum + mini;
        }
    }
    return sum;
}
int mian()
{
    int size;
    cout << "Enter the size of array=";
    cin >> size;
    vector<int> nums(size);
    for (int i = 0; i < size; i++)
    {
        cin>>nums[i];
    }
    int result=minimumOperations(nums);
    cout<<result;
}