#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cout<<"Enter the current day=";
    cin>>d;
    cout<<"Enter the before the days=";
    cin>>n;
    int x=d%7;
    int ans=n-x;
    if(ans>=0)
    cout<<ans;
    else
    cout<<ans+7

}