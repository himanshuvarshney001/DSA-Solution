#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int> &arr,int index)
{
    int leftIndex=2*index+1;
    int rightIndex=2*index+2;
    int largest=index;
    if(leftIndex<arr.size() && arr[leftIndex]>arr[largest])
    {
        largest=leftIndex;
    }
    if(rightIndex<arr.size() && arr[rightIndex]>arr[largest])
    {
        largest=rightIndex;
    }
    if(largest!=index)
    {
        swap(arr[largest],arr[index]);
        heapify(arr,largest);
    }
    else return;
}
int main()
{
    vector<int> arr={54,53,55,52,50,60};
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,i);
    }
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}