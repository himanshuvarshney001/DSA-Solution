#include <bits/stdc++.h>
using namespace std;
bool count(vector<int> &arr, int number,int m,int k)
{
    // cout << "Count function invoked" << endl;
    int count = 0;
    for (int i = 0; i <= arr.size();i++)
    {
        if(i<arr.size() && arr[i]<=number)
        {
            count++;
        }
        else{
            m = m - ceil(count / k);
            if (m <= 0)
                return true;
            count = 0;
        }
    }
    return false;
}
int minDays(vector<int> &bloomDay, int m, int k)
{
    int ans=-1;
    if (bloomDay.size() < m * k)
        return -1;
    else
    {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int i = 0; i < bloomDay.size();i++)
        {
            if(mini>bloomDay[i])
            {
                mini = bloomDay[i];
            }
            if(maxi<bloomDay[i])
            {
                maxi = bloomDay[i];
            }             
        }
        int left=mini;
        int right = maxi;
        while(left<=right)
        {
            int mid = left + (right - left) / 2;
            if(count(bloomDay,mid,m,k))
            {
                ans = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }

        }
    }
    return ans;
}
int main()
{
    int size,m,k;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size;i++)
    {
        cin >> arr[i];
    }
    cin >> m >> k;
    int result = minDays(arr, m, k);
    cout << result;
    return 0;
}
