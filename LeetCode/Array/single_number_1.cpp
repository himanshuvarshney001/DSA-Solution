#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, k;
    cout << "Enter the size of array=";
    cin >> size;
    vector<int> nums(size);
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    int res=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        res=res^nums[i];
    }
    cout<<res;
}    