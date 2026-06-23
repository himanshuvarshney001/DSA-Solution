#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &nums)
{
    int unique_number = 0;
    for (int i = 0; i <= 31; i++)
    {
        int count = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] & (1 << i))
                count++;
        }
        if (count % 3 == 1)
        {
            unique_number = unique_number + (1 << i);
        }
    }
    return unique_number;
}
int main()
{
    int size = 0;
    cout << "Enter the size of array=";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size;i++)
    {
        cin >> arr[i];
    }
    int result = singleNumber(arr);
    cout << result;
    return 0;
}