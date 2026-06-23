#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& arr, int k) {
    int preFixSum = 0;
    int maxLength = 0;
    unordered_map<int, int> freq;
    freq[0] = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        preFixSum = preFixSum + arr[i];

        if (freq.find(preFixSum - k) != freq.end())
        {
            maxLength = max(maxLength, i - freq[preFixSum - k]);
        }

        if (freq.find(preFixSum) == freq.end())
            freq[preFixSum] = i;
    }
    return maxLength;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = longestSubarray(arr, k);
    cout << result << endl;

    return 0;
}