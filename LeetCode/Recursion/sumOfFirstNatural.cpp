#include<bits/stdc++.h>
using namespace std;
int sumes(int n,int sum)
{
   if(n==0)
       return sum;
   return sumes(n - 1, sum + n);
}
int main()
{
    int result = sumes(3,0);
    cout << result;
    return 0;
}