// Program that find maximum size subarray with sum k
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, find, k, maxlen = 0, windowsum = 0, len = 0;
    cout << "Enter the size of array=";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value of k=";
    cin >> k;
    // Brute force generate all subarray and then find maximum subarray.
    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < arr.size(); j++)
        {
            sum = sum + arr[j];
            if (sum <= k)
            {
                len = j - i + 1; // calculate the length of the subarray
                                 // not use count++ because in array [3,-2,-2]
                                 // 3-2>0 not working use it
            }
        }
        maxlen = max(maxlen, len);
    }
    cout << "Maximum length is=" << maxlen;
    // Optimized code    using sliding window
    int left = 0, right = 0, sum = 0;
    maxlen = 0;
    len = 0;
    while (right < arr.size()) // Time complexity of this is o(n+n)
    {
        sum = sum + arr[right];
        while (sum > k)
        {
            sum = sum - arr[left];
            left++;
        }
        if (sum <= k)
        {
            maxlen = max(right - left + 1, maxlen);
        }
        right++;
    }
    cout << endl
         << "maximum lenght=" << maxlen;
}