#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int size;
    cin>>size;
    while(size--)
    {
        cin>>str;
        int i=1;
          long long num=stoll(str);
        while(i<=9)
        {
            string temp=str+char(i+'0');
          
            if(stoll(temp)%(num+i)==0)
            {
                cout<<i<<endl;
                break;
            }
            i++;
        }
    }
}