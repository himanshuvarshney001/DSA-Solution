#include <bits/stdc++.h>
using namespace std;
bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
{
    string result = "";
    for (auto i : word1)
    {
        result = result + i;
    }
    string result1 = "";
    for (auto i : word2)
    {
        result1 = result1 + i;
    }
    if (result == result1)
        return true;
    else
        return false;
}
int main()
{
    int size, size1;
    cout << "Enter the size of array=";
    cin >> size;
    vector<string> arr(size);
    cout << "Enter the size of array1=";
    cin >> size1;
    vector<string> arr1(size1);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }
    bool result = arrayStringsAreEqual(arr, arr1);
    cout << boolalpha << result;
    return 0;
}