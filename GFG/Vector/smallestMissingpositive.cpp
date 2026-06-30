#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int> &arr) {
    int i=0;
    for(int i=0;i<arr.size();i++)
    {
        while(arr[i]>=1 && arr[i]<=arr.size() && arr[arr[i]-1] != arr[i])
        {
           
            swap(arr[arr[i]-1],arr[i]);
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=i+1)
        return i+1;
    }
    return arr.size()+1;
}
int main()
{
    vector<int> arr={2,-3,4,1,1,7};
    int result=missingNumber(arr);
    cout<<result;
    return 0;
}