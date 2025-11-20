#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    int k;
    cout<<"Enter the size of array=";
    cin>>size;
    vector<int> arr(size);
    cout<<"Enter the size of array-";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number=";
    cin>>k;
    sort(arr.begin(),arr.end());
    static int i=0;
    while(1)
    {
        for(i=0;i<size;i++)
        {
            if(k==arr[i])
            {
                k=k*2;
                break;
            }
       
        }
        if(i==size)
        break;
    } 
    cout<<k;
}