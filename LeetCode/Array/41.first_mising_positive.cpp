#include <bits/stdc++.h>
using namespace std;
int firstMissingPositive(vector<int> &nums)
{
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    int i = 1;
    while (1)
    {
        auto it = mp.find(i);
        if (it != mp.end())
            i++;
        else
            break;
    }
    return i;
}
int main()
{
    int size;
    cout<<"Enter the size of array=";
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int result=firstMissingPositive(arr);
    cout<<"Missing positive="<<result;
    return 0;
}