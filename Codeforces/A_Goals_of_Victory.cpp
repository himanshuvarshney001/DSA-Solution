#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int size;
        cin >> size;
        size--;
        long long sum=0;
        while(size--)
        {
            int element;
            cin >> element;
            sum += element;
        }
        cout << -sum << endl;
    }
}
