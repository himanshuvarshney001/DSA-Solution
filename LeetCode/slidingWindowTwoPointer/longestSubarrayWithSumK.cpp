#include <bits/stdc++.h>
using namespace std;
// works only for positive number
int longestSubarray(vector<int> &arr, int k)
{
    int LongestSubarray = 0;
    int i = 0;
    int j = 0;
    int sum = 0;
    while (j < arr.size())
    {
        sum += arr[j];
        while (sum > k && i <= j)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == k)
        {
            LongestSubarray = max(LongestSubarray, j - i + 1);
        }
        j++;
    }
    return LongestSubarray;
}
int main()
{
    int size;
    cin >> size;
    int sum;
    cin >> sum;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int result = longestSubarray(arr, sum);
    cout << result;
}