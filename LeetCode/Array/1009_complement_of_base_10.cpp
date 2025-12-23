#include <bits/stdc++.h>
using namespace std;
int bitwiseComplement(int n)
{
    if(n==0)
    return 1;
    string str = "";
    while (n)
    {
        int bit = n & 1;
        str = str+char((bit?0:1) +'0');
        n = n >> 1;
    }
    int i=str.length(),j=0;
    int number=0;
    while(i)
    {
       number=number+(str[j]-'0')*pow(2,j);
       i--;
       j++;
    }
    return number;
}
int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    int result=bitwiseComplement(num);
    cout<<result;
    return 0;
}