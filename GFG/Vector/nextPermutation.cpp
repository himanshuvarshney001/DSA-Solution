#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,pivot=0,pivot_pos=-1,ans=INT_MAX,pos;
    int num;
    cout<<"Enter the size of vector=";
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        
        cout<<"Enter the element="<<i+1<<"=";
        cin>>num;
        arr[i]=num;
    }
    for(int i=size-1;i>0;i--)
    {
        if(arr[i]>arr[i-1])
        {
            pivot=arr[i-1];
            pivot_pos = i-1;
            break;
        }
    }
    if(pivot_pos==-1)
    reverse(arr.begin(),arr.end());
    else 
    {
        for(int i=pivot_pos;i<size;i++)
        {
            if(pivot<arr[i] && ans>arr[i])
            {
                ans=arr[i];
                pos=i;
            }
        }
        int temp=arr[pos];
        arr[pos]=arr[pivot_pos];
        arr[pivot_pos]=temp;
        sort(arr.begin()+(pivot_pos+1),arr.end());
    }
    for (int i:arr)
    cout<<i<<" ";
}