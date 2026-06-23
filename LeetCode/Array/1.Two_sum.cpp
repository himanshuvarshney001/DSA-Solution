#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &num,int target)
{
    map<int ,int> mp;
    for(int i=0;i<num.size();i++)
    {
        int remaining=target-num[i];
        if(mp.find(remaining)!=mp.end())
        {
            return {mp[remaining],i};
        }
        mp[num[i]]=i;
    }
    return {};

}
int main()
{
    int size,target;
    cout<<"Enter the size of array";
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target=";
    cin>>target;
    vector<int>result=twoSum(arr,target);
    for(auto i:result)
    cout<<i<<" ";
    return 0;
}
