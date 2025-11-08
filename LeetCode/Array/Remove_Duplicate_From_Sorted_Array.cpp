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
    unordered_set<int> a(arr.begin(),arr.end());
    arr.clear();
    for(auto i:a)
    arr.emplace_back(i);
    cout<<"Remove all duplicate element";
    for(auto it=arr.begin();it!=arr.end();it++)
    {
        cout<<*(it)<<" ";
    }
    return 0;
}