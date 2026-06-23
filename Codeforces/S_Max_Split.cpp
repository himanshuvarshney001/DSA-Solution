#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int left = 0;
    int right = 0;
    int size = str.size();
    string partion = "";
    vector<string> arr;
    for(char ch:str)
    {
        partion += ch;
        if(ch=='L')
            left++;
        else if(ch=='R')
            right++;
        if(left==right)
        {
            arr.push_back(partion);
            left = 0;
            right = 0;
            partion = "";
        }
    }
    cout << arr.size()<<endl;
    for(string a:arr)
        cout << a << endl;
    return 0;
}