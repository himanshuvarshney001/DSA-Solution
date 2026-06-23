#include<bits/stdc++.h>
using namespace std;
void binaryCon(int n)
{
    if(n==0)
        return;
    binaryCon(n / 2);
    if(n%2==0)
        cout << 0;
    else
        cout << 1;
}
int main()
{
    binaryCon(7);
    return 0;
}