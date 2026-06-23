#include <bits/stdc++.h>
using namespace std;
int floor(vector<int> &arr, int flo)
{
    int left = 0;
    int right = arr.size() - 1;
    int ans=-1;
    while(left<=right)
    {
        int mid = left + (right - left) / 2;
        if(arr[mid]==flo)
        {
            return arr[mid];
        }
        if(arr[mid]<flo)
        {
            ans = arr[mid];
            left = mid + 1;
        }
        else if(arr[mid]>flo)
        {
            right = mid - 1;
        }
    }
    return ans;
}
int ceil(vector<int> &arr, int cei)
{
   int left = 0;
    int right = arr.size() - 1;
    int ans=-1;
    while(left<=right)
    {
        int mid = left + (right - left) / 2;
        if(arr[mid]==cei)
        {
            return arr[mid];
        }
        if(arr[mid]>cei)
        {
            ans = arr[mid];
            right = mid - 1;
        }
        else if(arr[mid]<cei)
        {
            left = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int size, k;
    cout << "Enter size of the array";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number=";
    cin >> k;
    int flo = floor(arr, k);
    int cei = ceil(arr, k);
    cout << "Floor value=" << flo << endl
         << "Ceil value="<<cei;
    return 0;
}