#include<iostream>
using namespace std;
int main()
{
    int a,ith;
    cout<<"Eneter the number=";
    cin>>a>>ith;
    int toggleNumber=a^(1<<ith);
    cout<<toggleNumber;
    return 0;
}