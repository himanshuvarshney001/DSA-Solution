#include<bits/stdc++.h>
using namespace std;
bool palindrome(string &str)
{
    string temp = str;
    reverse(str.begin(),str.end());
    if(temp==str)
        return true;
    else
        return false;
}
string binary(int number)
{
    string result="";
    while(number)
    {
        result=result+char((number % 2)+'0');
        number /= 2;
    }
    return result;
}
int main()
{
    int number;
    cin >> number;
    if(number%2!=0)
    {
        string result = binary(number);
        if(palindrome(result))
            cout << "YES"<<endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}