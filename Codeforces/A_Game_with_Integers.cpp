#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int num;
        cin >> num;
        if(num%3==0)
            cout << "Second" << endl;
        else
            cout << "First" << endl;
    }
}