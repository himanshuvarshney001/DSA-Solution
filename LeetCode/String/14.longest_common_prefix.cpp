#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
   string result;
   sort(strs.begin(),strs.end());
   int length=strs[0].length();
   for(int j=0;j<length;j++)
   {
       if(strs[0][j]==strs[strs.size()-1][j])
       result=result+strs[0][j];
       else 
       break;
   }
   return result;
}
int main()
{
    int size;
    cout<<"Enter the size of string array=";
    cin>>size;
    vector<string> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    string result=longestCommonPrefix(arr);
    cout<<result;
}