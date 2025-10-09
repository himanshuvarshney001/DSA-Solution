#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string a[3],e;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);
    string b=a[0];
    string c=a[2];
    string d;
    for(int i=0;i<3;i++)
    {
        if(b[i]==c[i])
        {
           d[i]=b[i];
        } 
        else break;   
    }
    cout<<d;
}