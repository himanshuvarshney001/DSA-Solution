#include<bits/stdc++.h>
using namespace std;
int countSetBits(int num)
{
    int count = 0;
    while(num)
    {
        count++;
        num = num & (num - 1);
    }
    return count;
}
int main() 
{
    int num;
    cout << "Enter number=";
    cin >> num;
    int setBits = countSetBits(num);
    cout<<setBits;
    return 0;
}