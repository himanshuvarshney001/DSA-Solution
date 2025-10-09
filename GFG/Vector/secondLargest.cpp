#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,pivot,ans=INT_MAX;
    cout<<"Enter the size of vector=";
    cin>>size;
    vector<int> arr;
    for(int i=0;i<size;i++)
    {
        int element;
        cout<<"Enter the element i+1";
        cin>>element;
        arr[i]=element;
    }
    pivot=arr[0];
    for(int i=0;i<size;i++)
    {
        if(pivot<arr[i] && arr[i]<ans)
        {
            ans=arr[i];
        }
    }
      
}