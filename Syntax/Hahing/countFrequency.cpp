#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,find;
    cout<<"Enter the size of array=";
    cin>>size;
    cout<<"Enter element that you wants to frequency=";
    cin>>find;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    map<int,int> mpp;
    for(int i=0;i<size;i++)
    {
       mpp[arr[i]]++;
    }
    for(auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    cout<<mpp[find];
}