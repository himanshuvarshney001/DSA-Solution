#include <bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int> &nums)
{
    map<int, int> mp;
    vector<int> res;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second > 1)
            res.push_back(it.first);
    }
    return res;
}
int main()
{
    int size;
    cout << "Enter the size of array=";
    cin >> size;
    vector<int> nums(size);
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }
    vector<int> res=findDuplicates(nums);
    for(auto it: res)
    {
        cout<<it<<" ";
    }
}