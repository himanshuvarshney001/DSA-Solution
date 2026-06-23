#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> &weight,int mid,int day)
{
    int sum = 0;
    for (int i = 0; i < weight.size();i++)
    {
        if(sum+weight[i]>mid)
        {
            day--;
            sum = 0;
        }
        sum = sum + weight[i];
    }
    if(day>0)
        return true;
    else
        return false;
}
int shipWithinDays(vector<int> &weights, int days)
{
    int maxi = INT_MIN,ans=-1;
    int sum = 0;
    for (int i = 0; i < weights.size();i++)
    {
        if(maxi<weights[i])
            maxi = weights[i];
        sum = sum + weights[i];
    }
    int left = maxi;
    int right = sum;
    while(left<=right)
    {
        
        int mid = left + (right - left) / 2;
        if(check(weights,mid,days))
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int size, days;
    cout << "Enter the size of array=";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter days=";
    cin >> days;
    int result = shipWithinDays(arr, days);
    cout << result;
    return 0;
}