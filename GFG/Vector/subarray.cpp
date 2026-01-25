#include<bits/stdc++.h>
using namespace std;
void subarray(vector<int> &arr)
{
    int sum=0;
    for(int i=0;i<arr.size();i++)
    {
       for(int j=i;j<arr.size();j++)
       {
          for(int k=i;k<=j;k++)
          {
            cout<<arr[k]<<" ";
          }
          cout<<endl;
       }
    }
}
int main()
{
    int size;
    cout<<"Enter the size of array=";
    cin>>size;
    vector<int>arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    subarray(arr);
    return 0;
}