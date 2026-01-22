#include <bits/stdc++.h>
using namespace std;
// brute force approach
int longestConsecutive(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int count = 1;
    int maxi = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        
        if(nums[i]==nums[i-1])
        continue;
        else if (nums[i]==nums[i-1]+1)
        {
            count++;
        }
        else
        {
            maxi = max(count, maxi);
            count = 1;
        }
    }
    return max(maxi,count);
}
int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int result = longestConsecutive(arr);
    cout << result;
    return 0;
}