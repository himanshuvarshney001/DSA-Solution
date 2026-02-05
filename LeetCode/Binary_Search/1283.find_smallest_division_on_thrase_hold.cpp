#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> &nums,int thrasehold,int mid)
{
    int sum = 0;
    for (int i = 0; i < nums.size();i++)
    {
        sum = sum + ceil(float(nums[i]) / mid);
    }
    if(sum>thrasehold)
        return false;
    else
        return true;
}
int smallestDivisor(vector<int> &nums, int threshold)
{

    int maxi = INT_MIN;
    int ans = -1;
    for (int i = 0; i < nums.size();i++)
    {
        if(maxi<nums[i])
            maxi = nums[i];
    }
    int left = 1;
    int right = maxi;
    while(left<=right)
    {
        int mid = left + (right - left) / 2;
        if(check(nums,threshold,mid))
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
    int size;
    cout << "Enter the size of array=";
    cin >> size;
    vector<int> arr(size);
    for (int i= 0; i < size;i++)
    {
        cin >> arr[i];
    }
    int thrasehold;
    cout << "Enter thrase hold value=";
    cin >> thrasehold;
    int result = smallestDivisor(arr, thrasehold);
    cout << result;
    return 0;
}