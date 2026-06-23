#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> result;
    int sets = (1 << nums.size());
    for (int i = 0; i < sets ;i++)
    {
        vector<int> list;
        for (int j = 0; j < nums.size();j++)
        {
            if(i&(1<<j))
                list.push_back(nums[j]);
        }
        result.push_back(list);
    }
    return result;
}
int main()
{
    int num;
    cout << "Enter the size of array=";
    cin >> num;
    vector<int> arr(num);
    cout << "Enter element=";
    for (int i = 0; i < num;i++)
    {
        cin >> arr[i];
    }
    vector<vector<int>> result=subsets(arr);
    for (int i = 0; i < result.size();i++)
    {
        for (int j = 0; j < result[i].size();j++)
        {
            cout << result[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}