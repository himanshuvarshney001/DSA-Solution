#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array=";
    cin>>size;
    vector<int> nums(size);
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++)
    {
        cin>>nums[i];
        mp[nums[i]]++;
    }
    for(auto it:mp)
    {
        if(it.second>1)
        {
        cout<<it.first;
        }
    }
}