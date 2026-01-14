#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
   sort(nums.begin(),nums.end());
   int i=0;
   int value=nums[0];
   int count=1;
   int maxi=INT_MIN;
   while(i<nums.size())
   {
    
      if(i<nums.size() && nums[i]==value)
      i++;
      value++;
      if(nums[i]==value)
      {
        count++;
      }
      else if(nums[i]!=value)
      {

      }

   }
}
int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int result = longestConsecutive(arr);
    cout << result;
    return 0;
}