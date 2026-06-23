#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &arr, int target)
{
    int i = 0, j = arr.size() - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            return {i + 1, j + 1};
        }
        else if (arr[i] + arr[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {};
}
int main()
{
    int size, target;
    cout << "Enter the size of array";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target=";
    cin >> target;
    vector<int> result=twoSum(arr,target);
    for(auto i:result)
    {
        cout<<i<<" ";
    }
}
