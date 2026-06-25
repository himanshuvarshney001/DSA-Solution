#include<iostream>
using namespace std;
int p(vector<int> &arr,int low,int high)
{
    int pivot=low;
    int i=low;
    int j=high;
    while(i<j)
    {
        while(i<=high && arr[i]<=arr[pivot])
        i++;
        while(j>=low && arr[j]>arr[pivot])
        j--;
        if(i<j)
        swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quick(vector<int> &arr,int low,int high)
{
    if(low>=high)
    return;
    int partion=p(arr,low,high);
    quick(arr,low,partion-1);
    quick(arr,partion+1,high);
}
int main()
{
    vector<int> arr={-1,0,-4,1,0,-2,4,2,2};
    quick(arr,0,8);
    for(auto i:arr)
    cout<<i<<" ";
    return 0;
}
