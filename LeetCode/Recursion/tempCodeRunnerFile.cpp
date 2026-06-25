#include<iostream>
using namespace std;
void p(int n)
{
    if(n<=0)
    return;
    p(n/10);
    cout<<n%10<<" ";
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        p(a);
        cout<<endl;
    }
    return 0;
}