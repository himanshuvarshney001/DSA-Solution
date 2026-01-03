#include <bits/stdc++.h>
using namespace std;
int repeatedNTimes(vector<int> &nums)
{
   for(int i=0;i<nums.size()-2;i++)
   {
    if(nums[i]==nums[i+1] || nums[i]==nums[i+2])
    return nums[i];
   }
   return -1;
}
int main()
{
    int size;
    cout<<"Enter the size of array=";
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int result=repeatedNTimes(arr);
    cout<<"N times repeated element="<<result;
    return 0;
}