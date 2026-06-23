#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> &arr, int dist, int k)
{
    int last_cows = arr[0];
    k--;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - last_cows >= dist)
        {
            k--;
            last_cows = arr[i];
        }
    }
    if (k <= 0)
        return true;
    else
        return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int ans;
    if (k <= 2)
        return stalls[stalls.size() - 1] - stalls[0];
    else
    {
        int left = 1;
        int right = stalls[stalls.size() - 1] - stalls[0];
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (check(stalls, mid, k))
            {
                ans = mid;
                left = mid + 1;
            }
            else
                right = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int size, cows;
    cout << "Enter the size of the array=";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "No of cows=";
    cin >> cows;
    int result = aggressiveCows(arr, cows);
    cout << result;
}