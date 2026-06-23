#include <bits/stdc++.h>
using namespace std;
long long maximumScore(vector<int> &nums)
{
       long long sum=0;
       for(auto i:nums)
       sum=sum+i;
       int n=nums.size();
       long long ans=INT_MIN;
       int mini=INT_MAX;
       for(int i=n-1;i>0;i--)
       {
        sum=sum-nums[i];
        mini=min(mini,nums[i]);
        long long t=sum-mini;
        ans=max(ans,t);
       }
       return ans;
}
int main()
{
    int size;
    cout<<"Enter the size=";
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    cin>>arr[i];
    long long result=maximumScore(arr);
    cout<<result;
    return 0;
}