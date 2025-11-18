#include<bits/stdc++.h>
using namespace std;
bool kLengthApart(vector<int>& nums, int k) {
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]==1)
           {
            res.push_back(i);
           }
        }
        if(res.size()==0)
        return true;
        for(int i=0;i<res.size()-1;i++)
        {
           if((res[i+1]-res[i]-1)<k)
           return false;
        }
        return true;
    }
// Given Array-[1,0,0,0,1,0,0,1]
// logic behind it we store the position of the 1 in given array.
// so resultant vector like-[0,4,7]
// then check distance between them like - (4-0-1)=0 and distance between them 1 and next 1 in 
// Given array is 3. and then check (7-4-1)=2.
// if result vector in size are 0 then return true.
int main()
{
    int size;
    cout<<"Enter the size of array=";
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int k;
    cout<<"Enter the length=";
    cin>>k;
    bool res=kLengthApart(arr,k);
    cout<<std::boolalpha<<res;
}