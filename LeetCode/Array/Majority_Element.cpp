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
    int maj = (nums.size())/2, maxi = 0;
    int maj_element=nums[0];
    sort(nums.begin(), nums.end());
    int count=1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
       
        if (count > maxi)
        {
             maxi = max(count, maxi);
             maj_element=nums[i];
        }
    }
    cout<<maxi<<" "<<maj_element;
}