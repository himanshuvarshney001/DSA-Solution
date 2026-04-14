#include <bits/stdc++.h>
using namespace std;
vector<int> firstNegInt(vector<int> &arr, int k)
{
    if (arr.size() < k)
        return {};
    // Brute Force
    // bool flag = false;
    // vector<int> neg;
    // for (int i = 0; i < arr.size() - k + 1;i++)
    // {
    //     flag = false;
    //     for (int j = i; j < i+k;j++)
    //     {
    //         if(arr[j]<0)
    //             {
    //                 neg.push_back(arr[j]);
    //                 flag = true;
    //                 break;
    //             }
    //     }
    //     if(!flag)
    //         neg.push_back(0);
    // }
    // return neg;

    // Sliding Window
    vector<int> neg;
    vector<int> result;
    int i = 0;
    int j = 0;
    int p = 0;
    while (j < arr.size())
    {
        if (arr[j] < 0)
        {
            neg.push_back(arr[j]);
        }
        if (j - i + 1 == k)
        {
            if (p==neg.size())
            {
                result.push_back(0);
            }
            else if(arr[i]<0 )
            {
                result.push_back(neg[p]);
                p++;
            }
            else
                result.push_back(neg[p]);
            i++;
        }
        j++;
    }
    return result;
}
int main()
{
    int size, k;
    cout << "Enter the size of array=";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the subarray size=";
    cin >> k;
    cout << "Enter the element of the array=";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    vector<int> result = firstNegInt(arr, k);
    for (int i : result)
    {
        cout << i << " ";
    }
    return 0;
}