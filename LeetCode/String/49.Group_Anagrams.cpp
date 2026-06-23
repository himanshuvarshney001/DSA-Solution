#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    map<string,vector<string>>mp;
    for(auto &i:strs)
    {
        string key=i;
        sort(key.begin(),key.end());
        mp[key].push_back(i);
    }
    vector<vector<string>>result;
    for(auto &it:mp)
    result.push_back(it.second);
    return result;
}
int main()
{
    int size;
    cout << "Enter the size of array=";
    cin >> size;
    vector<string> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    vector<vector<string>> result = groupAnagrams(arr);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}