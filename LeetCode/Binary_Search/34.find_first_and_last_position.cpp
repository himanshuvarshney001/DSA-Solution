#include <bits/stdc++.h>
using namespace std;
vector<int> searchInsert(vector<int> &arr, int target)
{
    vector<int> result(2,-1);
    int n=arr.size();
    int left=0;
    int right=n-1;
    int j=0;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==target)
        {
          result[j]=mid;
          arr[mid]=target+1;
          left++;
          j++;
        }
        else if(arr[mid]>target)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return result;
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
    vector<int> result=searchInsert(arr,k);
    for(auto it:result)
    cout<<it;
    return 0;
}