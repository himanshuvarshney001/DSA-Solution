#include <bits/stdc++.h>
using namespace std;
string convertDateToBinary(string date)
{
    string binary_date="",binary_year="",binary_month="",binary_day="";
    int year=stoi(date.substr(0,4));
    int month=stoi(date.substr(5,2));
    int day=stoi(date.substr(8,2));
    while(year)
    {
        int bit=year&1;
        binary_year=char(bit+'0')+binary_year;
        year=year>>1;
    }
    binary_date+='-';
    while(month)
    {
        int bit=month&1;
        binary_month=char(bit+'0')+binary_month;
        month=month>>1;
    }
    binary_date+='-';
    while(day)
    {
        int bit=day&1;
        binary_day=char(bit+'0')+binary_day;
        day=day>>1;
    }
    return binary_year+'-'+binary_month+'-'+binary_day;
}
int main()
{
    string str;
    cout<<"Enter the date=";
    cin>>str;
    string result=convertDateToBinary(str);
    cout<<result;
    return 0;
}