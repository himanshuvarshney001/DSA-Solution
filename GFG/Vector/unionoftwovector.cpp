#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size1,size2;
    cout<<"Enter the size of size of first vector=";
    cin>>size1;
    cout<<"Enter the size of second array=";
    cin>>size2;
    vector<int> arr1(size1);
    vector<int> arr2(size2);
    for(int i=0;i<size1;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<size2;i++)
    {
        cin>>arr2[i];
    }
    arr1.resize(arr1.size()+arr2.size());
    sort(arr1.begin(),arr.end());
    arr2.clear();
    for(int i=0;i<arr1.size()-1;i++)
    {
        if(arr[i]==arr[i+1])
        arr1.remove()
    }
}