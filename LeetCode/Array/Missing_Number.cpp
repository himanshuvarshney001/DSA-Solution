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
    int n = nums.size();
    int sum = (n * (n + 1)) / 2;
    for (auto i : nums)
        sum = sum - i;
   cout<<sum;
}