#include<bits/stdc++.h>
using namespace std;
int  main()
{
    vector<int> arr={1,2};
    int left=0,mid,right=arr.size()-1,target=2;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==target)
        {
            cout<<mid;
            break;
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
    cout<<"Not found...";
}