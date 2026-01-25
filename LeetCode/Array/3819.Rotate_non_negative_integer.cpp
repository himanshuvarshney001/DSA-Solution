#include <bits/stdc++.h>
using namespace std;
vector<int> rotateElements(vector<int> &nums, int k)
{
    vector<int> arr;
    for (int x : nums)
    {
        if (x >= 0)
        {
            arr.push_back(x);
        }
    }
    if (arr.size() <= 1)
        return nums;
    k %= arr.size();
    if (k == 0)
        return nums;
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());

    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= 0)
        {
            nums[i] = arr[j++];
        }
    }

    return nums;
}
int main()
{
    int size;
    cout << "Enter the size of the array=";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size;i++)
    {
        cin >> arr[i];
    }
    int rotate;
    cout << "no of rotation=";
    cin >> rotate;
    vector<int> result = rotateElements(arr, rotate);
    for (int i = 0; i < size;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}   