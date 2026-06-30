#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> findSubarray(vector<int>& arr)
{
    vector<int> result;
    int bestStart = -1;
    int bestEnd = -1;
    int currStart = 0;
    int sum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];

        if(sum > maxSum || (sum == maxSum && i - currStart > bestEnd - bestStart))
        {
            maxSum = sum;
            bestStart = currStart;
            bestEnd = i;
        }

        if(sum < 0 || arr[i] < 0)
        {
            sum = 0;
            currStart = i + 1;
        }
    }

    if(maxSum < 0)
        return {-1};

    for(int i = bestStart; i <= bestEnd; i++)
    {
        result.push_back(arr[i]);
    }

    return result;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> ans = findSubarray(arr);

    for(int x : ans)
        cout << x << " ";

    cout << endl;

    return 0;
}