#include<iostream>
using namespace std;
void rev(vector<int> &arr,int i,int j)
{
   if(i>=j)
   return;
   swap(arr[i],arr[j]);
   rev(arr,i+1,j-1);
}
int main()
{
    vector<int> arr={1,2,3,4,5,6};
    rev(arr,0,arr.size()-1);
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}