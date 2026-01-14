#include <bits/stdc++.h>
using namespace std;
int addDigits(int num)
{
    if (num == 0)
        return 0;
    else if (num % 9 != 0)
        return num % 9;
    else
    {
        return 1 + (num - 1) % 9;
    }
}
int main()
{
    int num;
    cout<<"Enter the number:-";
    cin>>num;
    int result=addDigits(num);
    cout<<result;
    return 0;
}