#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int a, b;
        cin >> a >> b;
        if(b%2==0 || a%2==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}