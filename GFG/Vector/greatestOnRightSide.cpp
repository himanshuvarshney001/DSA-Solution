#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreatest(vector<int> arr)
{
    int maxi = INT_MIN;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[arr.size() - 1] = -1;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        maxi = max(arr[i],maxi);
        arr[i] = maxi;
    }
    return arr;
}
int main()
{
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> result = nextGreatest(arr);
    for(int i:result)
    {
        cout << i << " ";
    }
}