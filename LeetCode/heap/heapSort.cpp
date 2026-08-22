#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int> &arr,int index,int size)
{
    int leftIndex=2*index+1;
    int rightIndex=2*index+2;
    int largest=index;
    if(leftIndex<size && arr[leftIndex]>arr[largest])
    {
        largest=leftIndex;
    }
    if(rightIndex<size && arr[rightIndex]>arr[largest])
    {
        largest=rightIndex;
    }
    if(largest!=index)
    {
        swap(arr[largest],arr[index]);
        heapify(arr,largest,size);
    }
    else return;
}
void heapSort(vector<int> &arr)
{
    int size=arr.size();
    for(int i=size/2-1;i>=0;i--)
    {
        heapify(arr,i,size);
    }
    for(int i=size-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,0,i);
      
    }
}

int main()
{
    vector<int> arr={5,2,4,2,1};
    heapSort(arr);
    for(int i:arr)
    cout<<i<<" ";
    return 0;
}