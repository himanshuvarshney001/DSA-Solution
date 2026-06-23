#include <bits/stdc++.h>
using namespace std;
vector<int> maxOfSubarrays(vector<int> &arr, int k)
{
    if (arr.size() < k)
        return {};
    int i = 0;
    int j = 0;
    int p = 0;
    vector<int> next_greater;
    vector<int> result;
    while (j < arr.size())
    {
        while (next_greater.size() > p && next_greater.back() < arr[j])
        {
            next_greater.pop_back();
        }
        next_greater.push_back(arr[j]);
        if (j - i + 1 == k)
        {
            result.push_back(next_greater[p]);
            if (next_greater[p] == arr[i])
                p++;
            i++;
        }
        j++;
    }

    return result;
}
int main()
{
    int size, k;
    cout << "Enter the size of array=";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter subarray size=";
    cin >> k;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    vector<int> result = maxOfSubarrays(arr, k);
    for(int i:result)
        cout << i<<" ";
    return 0;
}