#include <iostream>
#include <vector>
using namespace std;
int lower(vector<int> &arr, int num)
{
    int left = 0, right = arr.size() - 1, ans = arr.size();
    while (left <= right)
    {
        int mid = (left + (right - left) / 2);
        if (arr[mid] >= num)
        {
            ans = mid;
            right = mid - 1;
        }
        else if (arr[mid] < num)
        {
            left = mid + 1;
        }
    }
    return ans;
}
int upper(vector<int> &arr, int num)
{
    int left = 0, right = arr.size() - 1, ans = arr.size();
    while (left <= right)
    {
        int mid = (left + (right - left) / 2);
        if (arr[mid] > num)
        {
            ans = mid;
            right = mid - 1;
        }
        else if (arr[mid] <= num)
        {
            left = mid + 1;
        }
    }
    return ans;
}
vector<int> searchInsert(vector<int> &arr, int target)
{
    int i = lower(arr, target);
    int j = upper(arr, target);
    if (i == arr.size() || arr[i] != target)
        return {-1, -1};
    else
        return {i, j - 1};
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