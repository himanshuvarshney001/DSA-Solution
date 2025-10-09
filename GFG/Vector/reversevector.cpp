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
        int element;
        cin>>element;
        arr[i]=element;
    }
    int left=0,right=size-1;
    while(left<right)
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    cout<<"Swaping done..."<<endl<<"[";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    
}