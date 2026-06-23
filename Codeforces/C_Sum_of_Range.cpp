#include<bits/stdc++.h>
using namespace std;
long long evenSum(int a)
{
    int n = a / 2;
    return n * 1LL * (n + 1);
}
int main()
{
    int x, y;
    cin >> x >> y;
    if(x>y)
        swap(x, y);
    x--;
    long long sum = (1LL * y * (y + 1)) / 2-(1LL*x*(x+1))/2;
    long long sume = evenSum(y) - evenSum(x);
    long long sumo = sum - sume;
    cout << sum << endl
         << sume << endl
         << sumo << endl;
    return 0;
}