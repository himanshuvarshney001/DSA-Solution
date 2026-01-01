#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int> &arr, int target)
{
    int n=arr.size();
    int left=0;
    int right=n-1,ans=n;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==target)
        return mid;
        else if(arr[mid]>target)
        {
            ans=mid;
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }

    }
    return ans;
}
int main()
{
    int size,k;
    cout<<"Enter size of array=";
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter number=";
    cin>>k;
    int result=searchInsert(arr,k);
    cout<<result;
    return 0;
}