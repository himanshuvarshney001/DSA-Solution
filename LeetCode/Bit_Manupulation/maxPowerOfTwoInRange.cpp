#include<iostream>
using namespace std;
int power2(int n)
{
   int x=0;
   while((1<<x)<=n)
   x++;
return x-1;
}
int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    int result=power2(n);
    cout<<"Max number="<<result;
    return 0;
}