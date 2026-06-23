#include<bits/stdc++.h>
using namespace std;
// arr[index]>given_number
int upper(vector<int> &arr,int num)
{
    int left=0,right=arr.size()-1,ans=arr.size();
    while(left<=right)
    {
        int mid=(left+(right-left)/2);
        if(arr[mid]>num)
        {
            ans=mid;
            right=mid-1;
        }
        else if(arr[mid]<=num)
        {
            left=mid+1;
        }
    }
    return ans;
}
int main()
{
    int size;
    cout<<"Enter the size of the array=";
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
       cin>>arr[i];
    }
    int num;
    cin>>num;
    int result=upper(arr,num);
    cout<<result;
    return 0;
}