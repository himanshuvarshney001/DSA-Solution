#include<iostream>
#include<vector>
using namespace std;
void ev(int inx,vector<int> arr)
{
    if(inx>=arr.size())
    return;
    ev(inx+2,arr);
    cout<<arr[inx]<<" ";
}
int main()
{
     int size;
     cin>>size;
     vector<int> arr(size,0);
     for(int i=0;i<size;i++)
     {
        cin>>arr[i];
     }
     ev(0,arr);
     return 0;

}