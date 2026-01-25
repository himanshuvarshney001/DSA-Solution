#include <bits/stdc++.h>
using namespace std;
int minimumDifference(vector<int> &arr, int k)
{
    int i = 0;
    if (arr.size() <= 1)
        return 0;
    sort(arr.begin(), arr.end());
    int maxi = INT_MAX;
    while (k <= arr.size())
    {
        int sum = arr[k - 1] - arr[i];
        maxi = min(maxi, sum);
        i++;
        k++;
    }
    return maxi;
}
int main()
{
    int size,k;
    cout << "Enter size=";
    cin>>size;
    vector<int> arr;
    for (int i = 0; i < size;i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    int result = minimumDifference(arr, k);
    cout << result;
    return 0;
}