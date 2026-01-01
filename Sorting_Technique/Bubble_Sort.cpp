#include<bits/stdc++.h>
using namespace std;
void Bubble_sort(vector<int> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
       for(int j=0;j<arr.size()-1-i;j++)
       {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
       }
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
    Bubble_sort(arr);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}