#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size, rot;
    cin>>size>>rot;
    rot = rot % size;
    vector<int> arr(size);
    for (int i = 0; i < size;i++)
    {
        cin >> arr[i];
    }
    // reverse(arr.begin(), arr.begin() + rot);
    // reverse(arr.begin() + rot, arr.end());
    // reverse(arr.begin(), arr.end());

    reverse(arr.end() - rot, arr.end());
    reverse(arr.begin(), arr.end() - rot);
    reverse(arr.begin(), arr.end());
    for (int i = 0; i < arr.size();i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}