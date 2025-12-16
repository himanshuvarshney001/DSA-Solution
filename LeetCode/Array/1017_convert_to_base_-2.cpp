#include <bits/stdc++.h>
using namespace std;
string BaseNeg2(int n)
{
    string result = "";
    while (n != 0)
    {
        int reminder = n % -2;
        n = n / -2;
        if (reminder < 0)
        {
            reminder+=2;
            n=n+1;
        }
        char ch=(reminder+'0');
        result=ch+result;
    }
    return result;
}
int main()
{
    string str;
    int n;
    cout << "Enter a number=";
    cin >> n;
    str = BaseNeg2(n);
    cout<<str;
}