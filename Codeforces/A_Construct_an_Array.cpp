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
    for (int i = 0; i < size;i++)
    {
        int n = arr[i];
        int t = n;
        int maxElement=n*2;
        int k = 0;
        while(n--)
        {
            if(t+k<=maxElement)
            {
                cout << t + (k++) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}