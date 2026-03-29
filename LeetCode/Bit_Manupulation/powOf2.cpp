#include<bits/stdc++.h>
using namespace std;
bool chechPow(int num)
{
    if(num==0)
        return false;
    num = num & (num - 1);
    if(num==0)
        return true;
    else
        return false;
}
int main()
{
    int num;
    cout<<"Enter number=";
    cin >> num;
    bool flag=chechPow(num);
    cout << boolalpha << flag;
    return 0;
}
