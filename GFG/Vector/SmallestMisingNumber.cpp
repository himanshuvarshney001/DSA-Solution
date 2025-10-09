#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter ths size of array=";
    cin>>size;
    vector<int> arr(size);
    cout<<"Enter the array element=";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    vector<bool> count(size,false);
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            count[arr[i]-1]=true;
        }
    }
    for(int i=0;i<size;i++)
    {
        if(!count[i])
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<++size;
}