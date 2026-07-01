#include<iostream>
using namespace std;
double p(double base, long long exp) {
    if (exp == 0)
        return 1;
    double half = p(base, exp / 2); // 2^16=2^4 * 2^4

    if (exp % 2 == 0)
        return half * half;
    else
        return base * half * half;
}
int main()
{
    int base,exp;
    cout<<"Enter the base=";
    cin>>base;
    cout<<"Enter the exp=";
    cin>>exp;
    cout<<p(base,exp);
    return 0;
}