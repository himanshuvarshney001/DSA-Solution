#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    vector<int> arr(size);
    cout<<"Enter the array element=";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int product=1,maxi=INT_MIN;
    for(int i=0;i<size;i++)
    {
        product=product*arr[i];
        if(product>maxi)
        maxi=product;
        if(arr[i]==0)
        product=1;
    }
    product=1;
    for(int i=size-1;i>=0;i--)
    {
        product=product*arr[i];
        maxi=max(maxi,product);
        if(arr[i]==0)
        product=1;
    }
    cout<<maxi;
}