#include<iostream>
#include<vector>
using namespace std;
int cntSubarrays(vector<int> &arr, int k) {
    // code here
    unordered_map<int,int> um;
    int prefix=0;
    um[0]=1;
    int subarray=0;
    for(int i=0;i<arr.size();i++)
    {
        prefix+=arr[i];
        if(um.find(prefix-k)!=um.end())
        {
            subarray+=um[prefix-k];
        }
        
            um[prefix]++;
        
    }
    return subarray;
}
int main()
{
    vector<int> arr={10,2-2,-20,10};
    int result=cntSubarrays(arr,-10);
    cout<<result;
    return 0;
}