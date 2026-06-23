#include<iostream>
using namespace std;
int power2(int n)
{
   int x=0;
   while((1<<x)<=n)
   x++;
return x-1;
}
int raise2power(int x)
{return (1<<x);}
int countSetBits(int n) {
    int x=power2(n);
    return (raise2power(x-1)*x)+(n-raise2power(x)+1)+(n-raise2power(x));
}
 int main()
 {
    int n=4;
    int result=countSetBits(n);
    cout<<result;
    return 0;
 }