#include<iostream>
using namespace std;
bool rev(string arr,int i,int j)
{
   if(i>=j)
   return true;
   if(arr[i]!=arr[j])
   return false;
   return rev(arr,i+1,j-1); 
}
int main()
{
    string arr="madam";
    if(rev(arr,0,arr.size()-1))
    cout<<"Palindrome";
    else cout<<"Not palindrome";
    return 0;
}