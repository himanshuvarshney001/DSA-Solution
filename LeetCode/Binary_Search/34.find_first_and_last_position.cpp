#include <bits/stdc++.h>
using namespace std;
vector<int> searchInsert(vector<int> &arr, int target)
{
    vector<int> result(2, -1);
    int ans = -1;
    int left = 0, i = 0;
    int right = arr.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= target)
        {
            result[0] = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    if(arr[result[0]]==target)
        return {-1, -1};
    ans = -1;
    left = 0, i = 0;
    right = arr.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] > target)
        {
            ans = mid;
            right = mid - 1;
        }
        else if (arr[mid] <= target)
        {
            left = mid + 1;
        }
    }
    if (ans!=-1 && arr[ans-1]==target && ans-1!=result[0])
        result[1] = ans-1;
    return result;
}
int main()
{
    int size, k;
    cout << "Enter size of array=";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number=";
    cin >> k;
    vector<int> result = searchInsert(arr, k);
    for (auto it : result)
        cout << it;
    return 0;
}