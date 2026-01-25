#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    while(size--)
    {
       int arr_size,count=0;
       int k;
       cin>>arr_size;
       int arr[arr_size];
       cin>>k;
       for(int i=0;i<arr_size;i++)
       {
        cin>>arr[i];
       }
       if(arr_size>0 && arr[0]!=0)
       {
        count=0;
       }
       else
         {
            int sum=0;
           for(int i=0;i<arr_size;i++)
           {
              if(i<k)
              {
                 sum=sum+arr[i];
                 if(sum>0)
                 {
                  count=0;
                  break;
                 }
              }
              else
              {
               count++;
               i++;
              }
           }
         }
      cout<<count<<endl;
    }
    return 0;
}