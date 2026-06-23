//Program that find maximum sum with size k
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,find,k,maxsum=0,windowsum=0;
    cout<<"Enter the size of array=";
    cin>>size;
     vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value of k=";
    cin>>k;
    if(k>arr.size())
    {
        cout<<"Window size is greater than the array size";
        return 0;
    }
    for(int i=0;i<k;i++)
    {
        windowsum=windowsum+arr[i];
    }
    maxsum=windowsum;
    int left=0,right=k-1;
    while(right<arr.size()-1)
    {
        right++;
        windowsum=windowsum-arr[left]+arr[right];
        maxsum=max(maxsum,windowsum);
        left++;
    }
    cout<<"Maximum sum is="<<maxsum;
}    