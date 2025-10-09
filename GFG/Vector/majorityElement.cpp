#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the size of vector = ";
    cin >> num;
    int con = num / 3;
    vector<int> arr(num);
    for (int i = 0; i < num; i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end());
    vector<int>arr1;
    int count=1;
    for (int i=1;i<num;i++)
    {
        if (i<size&&arr[i]==arr[i-1])
        {
            count++;
        }
        else
        {
            if (count > con)
            {
                arr1.push_back(arr[i - 1]);
            }
            count = 1;
        }
    }
    if (arr1.empty())
        cout << "No element occurs more than n/3 times\n";
    else
    {
        cout << "Elements occurring more than n/3 times: ";
        for (int x : arr1)
            cout << x << " ";
    }

    return 0;
}
