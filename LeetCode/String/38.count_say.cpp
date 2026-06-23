#include <bits/stdc++.h>
using namespace std;
string countAndSay(int n)
{
   if(n==1)
   return "1";
   string str=countAndSay(n-1);
   string reseult="";
   for(int i=0;i<str.size();i++)
   {
     int count=1;
     char ch=str[i];
     while(i<str.size()-1 && str[i]==str[i+1])
     {
        i++;
        count++;
     }
     reseult=reseult+to_string(count)+string(1,ch);
   }
   return reseult;
}
int main()
{
    int num;
    cin>>num;
    string result=countAndSay(num);
    cout<<result;
    return 0;
}