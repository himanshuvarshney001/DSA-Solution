#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    while(size--)
    {
        int arr_size;
        cin>>arr_size;
        int arr[arr_size];
        for(int i=0;i<arr_size;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<arr_size;i++)
        {
            cout<<arr[i]<<" ";
            int maxi=arr[i];
            for(int j=i+1;j<arr_size;j++)
            {
                maxi=max(maxi,arr[j]);
                cout<<maxi<<" ";
            }
        }
        cout<<endl;
    }
}