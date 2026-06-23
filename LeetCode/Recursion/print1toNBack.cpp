#include<iostream>
using namespace std;
void print(int n,int i)
{
    if(i<1)
    return;
    print(n,i-1);
    cout<<i;
}
int main()
{
    int n;
    cin>>n;
    print(n,n);
    return 0;
}