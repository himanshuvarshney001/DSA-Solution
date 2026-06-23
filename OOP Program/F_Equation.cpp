#include<bits/stdc++.h>
using namespace std;
long long power(int num,int n)
{
    long long result = 1;
    for (int i = 0; i < n;i++)
    {
        result *= num;
    }
    return result;
}
int main()
{
    int number, range;
    cin >> number >> range;
    long long result=0;
    for (int i = 0; i <= range;i++)
    {
        if(i%2==0)
        {
            result += power(number, i);
        }
    }
    cout << result - 1<<endl;
}