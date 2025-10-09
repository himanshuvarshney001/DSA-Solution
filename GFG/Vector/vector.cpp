#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr(size);
    // vector inbuilt function
    swap(arr[left],arr[right]);
    reverse(arr.begin(),arr.end());
    sort(arr.begin(),arr.end());
    sort(arr.begin(),arr.end(),greater<int>());
}