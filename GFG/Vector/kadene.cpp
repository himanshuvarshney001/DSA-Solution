#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array=";
    cin>>size;
    int arr[size];
    cout<<"Enter the array element=";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    vector<int> sub;
    int sum=0,max=arr[0];
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
        if(sum>max)
        {
            max=sum;
            
        }
        if(sum<0)
        {
            sum=0;
            sub.clear();
        }
    }
    cout<<"max sum="<<max<<endl;
    for(int i:sub)
    {
        cout<<i<<" ";
    }
}