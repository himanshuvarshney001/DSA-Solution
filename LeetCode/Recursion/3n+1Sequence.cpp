#include<iostream>
#include<vector>
using namespace std;
int sequence(int n)
{
    if(n<=1)
    return 1;
    if(n%2==0)
    {
        return 1+sequence(n/2);
    }
    else return 1+sequence(3*n+1);
}
int main()
{
    int n;
    cin>>n;
    cout<<sequence(n);
    return 0;
}