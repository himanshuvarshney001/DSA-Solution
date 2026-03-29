#include<bits/stdc++.h>
using namespace std;
bool oddEven(int num)
{
    return !(num & 1);
}
int main()
{
    int num;
    cout<<"Enter number=";
    cin >> num;
    bool flag=oddEven(num);
    cout << boolalpha << flag;
    return 0;
}