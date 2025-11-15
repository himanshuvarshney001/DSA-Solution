#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;

    cout << "Enter the size of array=";
    cin >> size;

    vector<int> nums(size);
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
     map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        int max = INT_MIN;
        for (auto it : mpp) {
            if (it.second > max)
                max = it.second;
        }
        int count=0;
        for(auto it: mpp)
        {
            if(max==it.second)
            count=count+it.second;
        }
        cout<<count;
}    