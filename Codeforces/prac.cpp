#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size,sum=0;
    cin >> size;
    int arr_size;
    cin >> arr_size;
    int arr[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < arr_size; i++)
    {
        int maxi = arr[i];
        int mini=arr[i];
        for (int j = i + 1; j < arr_size; j++)
        {
            maxi = max(maxi, arr[j]);
            mini=min(mini,arr[j]);
            sum=sum+maxi-mini;
        }
    }
    cout<<sum;
    return 0;
}