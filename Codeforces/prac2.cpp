#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int maxi=INT_MIN;
    while(size--)
    {
       int num,flag=true;
       cin>>num;
       for(int i=1;i<=num;i++)
       {
          for(int j=1;j<=num;j++)
          {
              if(j%i==0 && i!=j)
              {
                  maxi=max(maxi,i);
              }
          }
       }
       cout<<maxi<<endl;
    }
    return 0;
}