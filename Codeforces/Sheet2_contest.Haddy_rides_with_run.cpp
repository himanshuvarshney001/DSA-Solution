#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num;
    cin>>num;
    long long row=num/4;
    long long result=row*4;
    if(row%2==0)
    {
        for(int i=0;i<4;i++)
        {
            if(result==num)
            {
                cout<<row<<" "<<i;
                break;
            }           
            result++;
        }
    }
    else 
    {
        for(int i=3;i>=0;i--)
        {
             if(result==num)
            {
                cout<<row<<" "<<i;
                break;
            }
            result++;
        }
    }
    return 0;
}