#include<bits/stdc++.h>
using namespace std;
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
    int j=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
        }
    }
    for(auto it=arr.begin();it!=arr.end();it++)
    {
        cout<<*(it)<<" ";    
    }
}