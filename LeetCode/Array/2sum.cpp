#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,target;
    cout<<"Enter the size of array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target=";
    cin>>target;
    map<int,int>mpp;
    for(int i=0;i<size;i++)
    {
        int remaining=target-arr[i];
        if(mpp.find(remaining) !=mpp.end())
        {
            cout<<mpp[remaining]<<" "<<i;
            break;
        }
        mpp[arr[i]]=i;
    }
    return 0;
}
