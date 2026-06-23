#include <bits/stdc++.h>
using namespace std;
vector<int> constructTransformedArray(vector<int> &nums)
{
    vector<int> result(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= 0)
        {
            result[i] = nums[(nums[i]+i)%nums.size()];
        }
        else
        {
            result[i] = nums[(nums[i]+nums.size()+i)%nums.size()];
        }
    }
    return result;
}
int main()
{
    int size;
    cout << "Enter the size of the array=";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    vector<int> result = constructTransformedArray(arr);
    for(auto i:result)
    {
        cout << i << " ";
    }
    return 0;
}