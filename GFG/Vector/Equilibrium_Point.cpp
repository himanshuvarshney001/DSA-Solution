#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array=";
    cin>>size;
    int arr[size];
    cout<<"Enter the array element=";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    // Brute Force
    int left=0,right=0;
    for(int i=1;i<size;i++)
    {
        left+=arr[i-1];
        for(int j=i+1;j<size;j++)
        {
            right=right+arr[j];
        }
        if(left==right)
        {
            cout<<i;
            return 0;
        }
        right=0;
    }
    cout<<"-1";
    cout<<endl;
    // Optimum Solution
    int total=0;
    for(int i:arr)
    {
        total=total+i;
    }
    for(int i=0;i<size-1;i++)
    {
        left=left+arr[i];
        total=total-arr[i+1];
        if(total==left)
        {
            cout<<i;
            return 0;
        }
        
    }
    cout<<"-1";
}