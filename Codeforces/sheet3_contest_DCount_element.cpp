#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size;i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int sum = 0,count,previous=arr[0];
    for (int i = 0; i < size;)
    {
        count = 0;
        while(i<size && arr[i]==previous)
        {
            count++;
            i++;
        }
        if(i<size && previous+1==arr[i])
        {
            sum = sum + count;
        }
        if(i<size)
         {
            previous = arr[i];
         }
    }
    cout << sum;
    return 0;
}
