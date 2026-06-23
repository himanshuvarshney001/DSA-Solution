#include <bits/stdc++.h>
using namespace std;
int longestSubarray(vector<int> &arr, int k)
{
    int preFixSum = 0;
    int maxLength = 0;
    unordered_map<int, int> freq;
    freq[0] = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        preFixSum = preFixSum + arr[i];
        if(freq.find(preFixSum-k)!=freq.end())
        {
            maxLength = max(maxLength, i - freq[preFixSum - k] );
        }
        if(freq.find(preFixSum)==freq.end())
            freq[preFixSum] = i;
    }
    return maxLength;
}
int main()
{
    int size;
    cin >> size;
    int sum;
    cin >> sum;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int result = longestSubarray(arr, sum);
    cout << result;
}