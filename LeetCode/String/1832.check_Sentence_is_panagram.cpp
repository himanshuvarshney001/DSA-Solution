#include <bits/stdc++.h>
using namespace std;
// bool checkIfPangram(string &sentence)
// {
//     unordered_set<char>myset;
//     for(auto it:sentence)
//     {
//         myset.insert(it);
//     }
//     if(myset.size()==26)
//     return true;
//     else 
//     return false;
// }
//optimum solution
bool checkIfPanagram(string &sentence)
{
    vector<bool>arr(26,false);
    int count=0;
    for(auto it:sentence)
    {
        if(arr[it-'a']!=true)
        {
            arr[it-'a']=true;
            count++;
        }
    }
    if(count==26)
    return true;
    else
    return false;
}
int main()
{
    string str;
    cout<<"Enter the string all character in lower case=";
    cin>>str;
    bool result=checkIfPanagram(str);
    cout<<boolalpha<<result;
    return 0;
}