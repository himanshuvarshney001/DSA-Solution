#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int mini = INT_MAX;
    while(size--)
    {
        int element;
        cin >> element;
        if(mini>abs(element))
        {
            mini = abs(element);
        }
    }
    cout << mini << endl;
}