#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, target;
    cout << "Enter the size=";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target element=";
    cin >> target;
    int position=0;
    if(arr[0]>target)
    {
        cout<<"0";
        return 0;
    }
    else if(arr[n-1]<target)
    {
        cout<<n;
        return 0;
    }
    // bruete Forc
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            {
                cout<<i;
                return 0;
            }
        else if (arr[i] < target)
            {
                position = i+1;
            }
    }
    cout<<position;    
}