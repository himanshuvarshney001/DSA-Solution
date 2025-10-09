#include <bits/stdc++.h>
using namespace std;
void tocom(string &a)
{
    // int num = stoi(a);
    // if (num==0)
    // {
       
    // }
    
        for (char &i : a)
            i = (i == '1') ? '0' : '1';
        int carry = 1;
        for (int i = a.size() - 1; i >= 0; i--)
        {
            if (carry == 1 && a[i] == '1')
            {
                carry = 1;
                a[i] = '0';
            }
            else if (carry == 1)
            {
                a[i] = '1';
                carry = 0;
            }
        }
        if (carry == 1)
            a = '1' + a;
    
}
int main()
{
    int num;
    string a;
    cout<<"Enter decimal number=";
    cin>>num;
    if(num>0)
    {
        while(num)
        {
            int digit=num%2;
            if(digit==0)
            {
                a=a+'0';
            }
            else
            {
                a=a+'1';
            }
            num=num/2;
        }
        reverse(a.begin(),a.end());
    }
    else if(num==0)
    {
        a='0';
    }
    else{
        num=-num;
        while(num)
        {
            int digit=num%2;
            if(digit==0)
            {
                a=a+'0';
            }
            else
            {
                a=a+'1';
            }
            num=num/2;
        }
        reverse(a.begin(),a.end());
        tocom(a);
    }
    cout<<"Binary is = "<<a;
}