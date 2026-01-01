#include<bits/stdc++.h>
using namespace std;
void Insertion_sort(vector<int> &arr)
{
    int j;
   for(int i=0;i<arr.size();i++)
   {
      int min=i;
      for(j=i+1;j<arr.size();j++)
      {
          if(arr[min]>arr[j])
          min=j;
      }
      swap(arr[min],arr[i]);
   }
}
int main()
{
    int size;
    cout<<"Enter size of array=";
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    Insertion_sort(arr);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}