#include<iostream>
#include<vector>
using namespace std;
long long sum(int index,vector<int> &arr,int m)
{
    if(index==arr.size())
    return 0;
    if(arr.size()-m<=index)
    return arr[index]+sum(index+1,arr,m);
    return sum(index+1,arr,m);
}
int main()
{
    int size;
    cin>>size;
    int m;
    cin>>m;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    long long result=sum(0,arr,m);
    cout<<result;
    return 0;
}