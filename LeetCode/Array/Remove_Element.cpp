#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,k;
    cout<<"Enter the size of array=";
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the k=";
    cin>>k;
    int j=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=k)
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
    cout<<endl;
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=k)
        count++;
    }
    cout<<count;
}