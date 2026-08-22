#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int> &arr,int index)
{
    int leftIndex=2*index+1;
    int rightIndex=2*index+2;
    int largest=index;
    if(leftIndex<arr.size() && arr[leftIndex]>arr[largest])
    largest=leftIndex;
    if(rightIndex<arr.size() && arr[rightIndex]>arr[largest])
    largest=rightIndex;
    if(largest!=index)
    {
        swap(arr[largest],arr[index]);
        heapify(arr,largest);
    }
    else return;
}
int main()
{
    vector<int> arr={10,50,60,70,80,90};
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,i);
    }
    cout<<"Max Heap"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}