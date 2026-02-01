#include <bits/stdc++.h>
using namespace std;
int findmax(vector<int> &arr)
{
    int mini = INT_MIN;
    for (int i : arr)
        mini = max(i, mini);
    return mini;
}
int calculatetime(vector<int> &arr, int mid, int hours)
{
    int total_time = 0;
    for (int i : arr)
    {
        total_time += ceil((double)(i) / mid);
        if (total_time > hours) // Handle overflow condition
            return hours + 1;
    }
    return total_time;
}
int minEatingSpeed(vector<int> &piles, int h)
{
    int low = 1;
    int ans = INT_MAX;
    int high = findmax(piles);
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int time = calculatetime(piles, mid, h);
        if (time <= h)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}
int main()
{
    int size, hour;
    cout << "Enter the size of the array=";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter hours=";
    cin >> hour;
    int result = minEatingSpeed(arr, hour);
    cout << result;
    return 0;
}