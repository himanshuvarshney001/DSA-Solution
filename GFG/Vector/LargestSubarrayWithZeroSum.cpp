#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    int sum = 0, count = 0, count1 = 0;
    cout << "Enter the size of array";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the element of array=";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // Brute Force approach
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            sum = sum + arr[j];
            count++;
            if (sum == 0)
            {
                count1 = max(count, count1);
            }
        }
        count = 0;
        sum = 0;
    }
    cout << "Longest array length with zero as sum=" << count1;
    // optimum Approach
    sum=0,count=0,count1=0;
    for(int i=0;i<arr.size();i++)
    {
        
    }
}