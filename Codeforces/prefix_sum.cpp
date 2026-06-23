#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int range;
    cin>>range;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    vector<long long>prefix(size);
    prefix[0]=arr[0];
    for(int i=1;i<size;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    while(range--)
    {
        int left,right;
        cin>>left>>right;
        long long sum=0;
        if(left==1)
        {
            sum=prefix[right-1];
        }
        else
        {
            sum=prefix[right-1]-prefix[left-2];
        }
        cout<<sum<<endl;
    }
}