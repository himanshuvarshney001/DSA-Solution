#include<bits/stdc++.h>
using namespace std;
vector<int> rotateElements(vector<int>& nums, int k) {
   vector<int> arr;

    for (int x : nums) {
        if (x >= 0) {
            arr.push_back(x);
        }
    }

    int m = arr.size();
    if (m <= 1) return nums;

    k %= m;
    if (k == 0) return nums;

    // RIGHT rotate
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());

    int j = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] >= 0) {
            nums[i] = arr[j++];
        }
    }

    return nums;
}
int main()
{
    int size;
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    vector<int> result=rotateElements(arr,k);
    for(auto i:result)
    {
        cout<<i<<" ";
    }
    return 0;
}