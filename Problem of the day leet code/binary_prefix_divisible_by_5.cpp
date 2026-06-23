#include <bits/stdc++.h>
using namespace std;
vector<bool> prefixesDivBy5(vector<int> &arr)
{
    vector<bool> res;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = ((sum * 2) + arr[i]) % 5;//sum use as reminder
                                       // modulo 5 because number out of range.
        if (sum == 0)
            res.push_back(true);
        else
            res.push_back(false);
    }
    return res;
}
int main()
{
    int size;
    cout << "Enter the size of array=";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    vector<bool> res = prefixesDivBy5(arr);
    for (int i = 0; i < size; i++)
    {
        cout << boolalpha << res[i] << " ";
    }
    return 0;
}