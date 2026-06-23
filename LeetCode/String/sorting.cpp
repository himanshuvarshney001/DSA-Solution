#include <bits/stdc++.h>
using namespace std;
vector<string> sorting(vector<string> &str)
{
    sort(str.begin(), str.end());
    return str;
}
vector<string> sorting_rev(vector<string> &str)
{
    sort(str.begin(), str.end(), greater<string>());
    return str;
}
vector<string> costom_sorting(vector<string> &str)
{
    sort(str.begin(), str.end(), [](const string &a, const string &b)
         {
       if(a.length()!=b.length())
            return a.length()<b.length();
        return a<b; });
    return str;
}
vector<string> costom_sorting_rev(vector<string> &str)
{
    sort(str.begin(), str.end(), [](const string &a, const string &b)
         {
       if(a.length()!=b.length())
            return a.length()>b.length();
        return a>b; });
    return str;
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
    cout << endl;
    vector<string> result;
    result = sorting(arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    result = sorting_rev(arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    result = costom_sorting(arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    result = costom_sorting_rev(arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}