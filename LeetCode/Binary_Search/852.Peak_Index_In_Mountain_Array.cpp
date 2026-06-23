#include <bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    int left=0,right=arr.size()-1;
    while(left<right)
    {
        int mid=(left+right)/2;
        if(arr[mid]<arr[mid+1])
        left=mid+1;
        else
        right=mid;
    }
    return left;
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
    int result=peakIndexInMountainArray(arr);
    cout<<result;
    return 0;
}