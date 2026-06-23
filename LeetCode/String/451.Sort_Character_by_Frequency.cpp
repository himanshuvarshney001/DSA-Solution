#include <bits/stdc++.h>
using namespace std;
string frequencySort(string s)
{
    unordered_map<char, int> um;
    for (auto i : s)
    {
        um[i]++;
    }
    vector<pair<char, int>> freqarr;
    for (auto [ch, freq] : um)
    {
        freqarr.push_back({ch, freq});
    }
    auto comp = [&](pair<char, int> &a, pair<char, int> &b)
    {
        return a.second > b.second;
    };
    sort(freqarr.begin(), freqarr.end(), comp);
    string result = "";
    for (auto [ch, freq] : freqarr)
        result.append(freq, ch);
    return result;
}
int main()
{
    string str;
    cout << "Enter the string = ";
    cin >> str;
    string result = frequencySort(str);
    cout << result;
    return 0;
}