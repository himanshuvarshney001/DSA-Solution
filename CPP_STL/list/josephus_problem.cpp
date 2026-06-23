#include <bits/stdc++.h>
using namespace std;
int josephus(int n, int k)
{
    vector<bool> arr(n + 1, true);
    arr[0] = false;
    int count = n;
    int counter = 1;
    int i = 1;
    while (count > 1)
    {
        if (i == n + 1)
            i = 1;
        if (arr[i] == false)
        {
            i++;
            continue;
        }
        if (counter == k)
        {
            arr[i] = false;
            count--;
            counter = 0;
        }
        i++;
        counter++;
    }
    for (int i = 0; i <= n; i++)
    {
        if(arr[i])
            return i;
    }
    return 0;
}
int main()
{
    int result = josephus(5, 2);
    cout << result;
    return 0;
}