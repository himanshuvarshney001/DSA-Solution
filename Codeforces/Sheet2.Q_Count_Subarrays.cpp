#include <bits/stdc++.h>
using namespace std;
int subarray(vector<int> &arr)
{
    int count = arr.size();
    for (int i = 1; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            if (arr[j] > arr[j - 1])
            {
                count++;
            }
            else
                break;
        }
    }
    return count;
}
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int size;
        cin >> size;
        vector<int> arr(size);
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        int sum = subarray(arr);
        cout << sum<<endl;
    }
}