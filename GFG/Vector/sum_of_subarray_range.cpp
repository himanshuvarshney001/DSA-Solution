#include <bits/stdc++.h>
using namespace std;
int subarrayRanges(vector<int> &arr)
{
    int sum=0;
    for(int i=0;i<arr.size();i++)
    {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int j=i;j<arr.size();j++)
        {
           maxi=max(maxi,arr[j]);
           mini=min(mini,arr[j]);
           sum=sum+maxi-mini;
        }
    }
    return sum;
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
    int sum=subarrayRanges(arr);
    cout<<sum;
}