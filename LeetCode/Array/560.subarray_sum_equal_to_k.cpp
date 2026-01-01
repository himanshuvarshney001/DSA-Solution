#include <bits/stdc++.h>
using namespace std;
int subarraySum(vector<int> &nums, int k)
{
//    brute force
    int total_subarray=0;
    int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        sum=0;
        for(int j=i;j<nums.size();j++)
        {
           sum=sum+nums[j];
           if(sum==k)
           {
            total_subarray++;
           }
        }
    }
    return total_subarray;
}
int main()
{
    int size,k;
    cout<<"Enter the size of array=";
    cin>>size;
    vector<int>arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter sum value=";
    cin>>k;
    int result=subarraySum(arr,k);
    cout<<result;
    return 0;
}