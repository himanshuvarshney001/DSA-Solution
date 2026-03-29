#include<bits/stdc++.h>
using namespace std;
int remRight(int num)
{
    // let Number 12=1100;
    // Number-1=11=1011;
    // you see right bits of right most set bit is invert in number-1;
    // if apply & operator in both number so we get 1000; our desired output
    return num & (num - 1);
}
int main()
{
    int num;
    cout << "Enter number=";
    cin >> num;
    int result=remRight(num);
    cout << result;
    return 0;
}