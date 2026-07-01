#include<iostream>
using namespace std;
bool rev(vector<int> arr,int i,int j)
{
   if(i>=j)
   return true;
   if(arr[i]!=arr[j])
   return false;
   return rev(arr,i+1,j-1); 
}
int main()
{
    int size;
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    if(rev(arr,0,arr.size()-1))
    cout<<"YES";
    else cout<<"NO";
    return 0;
}