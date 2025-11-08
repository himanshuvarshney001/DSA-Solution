#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    printf("Enter the the number=");
    scanf("%d",&num);
    int sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(num==sum)
    cout<<"True";
    else
    cout<<"False";
}