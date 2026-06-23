#include<bits/stdc++.h>
using namespace std;
int minFlipBit(int start,int goal)
{
    int num = start ^ goal;
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
    int start, goal;
    cout << "Enter start and goal=";
    cin >> start >> goal;
    int result = minFlipBit(start, goal);
    cout << result;
    return 0;
}